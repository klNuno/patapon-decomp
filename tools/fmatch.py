#!/usr/bin/env python3
"""Match one function in isolation, built exactly like the game (compiler and flags come from the Makefile).

  tools/fmatch.py diff FUNC FILE.c [--flags "-O4,p"] [--kit mwccpsp_3.0.1_219]
      Compile FILE.c, link its .text at FUNC's address (every func_/D_/jtbl_ symbol at the address in its
      name), compare the bytes with the retail BOOT.BIN. Prints "MATCH FUNC 100%" (exit 0) or the percent
      and the rows side by side, differing rows marked "!!" (exit 1). A compile error or a C file that
      defines data prints the reason (exit 2).
  tools/fmatch.py asm FUNC     the original asm of FUNC (splat text, labels and %hi/%lo kept)
  tools/fmatch.py m2c FUNC     first-pass C from m2c (mipsel, gcc style: m2c has no MIPS Metrowerks mode)
  tools/fmatch.py decls FUNC   declarations already in src/ for the func_ and D_ symbols FUNC's asm uses

Work files go to build/fmatch/<FUNC>/. A 100 % here is necessary, not sufficient: only `make check`
on the whole executable decides.
"""
import argparse
import glob
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BIN = os.path.join(ROOT, "tools/bin")
TEXT_VRAM, TEXT_OFF = 0x08804000, 0x54


def run(cmd, **kw):
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, **kw)


def make_var(name):
    r = run(["make", "-s", "--no-print-directory", f"print-{name}"])
    if r.returncode:
        sys.exit(f"make print-{name} failed: {r.stderr}")
    return r.stdout.strip()


def version():
    return open(os.path.join(ROOT, "config/VERSION")).read().strip()


def functions():
    out = {}
    for line in open(os.path.join(ROOT, f"config/{version()}/functions.tsv")):
        if line.startswith("#") or not line.strip():
            continue
        addr, size, name = line.split()[:3]
        out[name] = (int(addr, 16), int(size, 16))
    return out


def named_symbols():
    """name -> address from symbol_addrs (imports, exports, later our own names)."""
    out = {}
    path = os.path.join(ROOT, f"config/{version()}/symbol_addrs.boot.txt")
    for m in re.finditer(r"^\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+)\s*;", open(path).read(), re.M):
        out[m.group(1)] = int(m.group(2), 16)
    return out


def jump_table_only(obj, size):
    """True when every word of the object's .rodata is a R_MIPS_32 relocation (switch jump tables)."""
    rel = run([os.path.join(BIN, "mipsel-linux-gnu-readelf"), "-r", "-W", obj]).stdout
    m = re.search(r"Relocation section '\.rel\.rodata'.*?\n(.*?)(?:\n\n|\Z)", rel, re.S)
    if not m:
        return False
    offs = {int(l.split()[0], 16) for l in m.group(1).splitlines() if "R_MIPS_32" in l}
    return size % 4 == 0 and offs == set(range(0, size, 4))


def asm_text(func):
    """FUNC's lines from the splat output: a text chunk, or matchings/ once it is C."""
    pat = re.compile(r"^(?:nonmatching %s, .*?|glabel %s\n.*?)^endlabel %s$" % (func, func, func), re.S | re.M)
    for path in sorted(glob.glob(f"{ROOT}/asm/{version()}/boot/**/*.s", recursive=True)):
        txt = open(path, encoding="utf-8").read()
        if f"glabel {func}\n" in txt:
            m = re.search(r"^glabel %s\n.*?^endlabel %s$" % (func, func), txt, re.S | re.M)
            return os.path.relpath(path, ROOT), m.group(0)
    sys.exit(f"no asm for {func} under asm/{version()}/ (run make split?)")


def objdump_lines(path, binary_at=None):
    od = os.path.join(BIN, "mipsel-linux-gnu-objdump")
    if binary_at is None:
        cmd = [od, "-d", "-M", "no-aliases", "-j", ".text", path]
    else:
        cmd = [od, "-D", "-b", "binary", "-m", "mips:allegrex", "-EL", "-M", "no-aliases",
               f"--adjust-vma={binary_at:#x}", path]
    out = []
    for line in run(cmd).stdout.splitlines():
        m = re.match(r"\s*([0-9a-f]+):\s+([0-9a-f]{8})\s+(.*)", line)
        if m:
            out.append((int(m.group(1), 16), m.group(3).replace("\t", " ")))
    return out


def cmd_diff(a):
    funcs = functions()
    if a.func not in funcs:
        sys.exit(f"{a.func} is not in functions.tsv")
    addr, size = funcs[a.func]
    work = os.path.join(ROOT, "build/fmatch", a.func)
    os.makedirs(work, exist_ok=True)
    obj, elf, raw = (os.path.join(work, n) for n in ("cand.o", "cand.elf", "cand.bin"))
    mwcc = make_var("MWCC")
    if a.kit:
        mwcc = re.sub(r"mwccpsp_[0-9._]+", a.kit, mwcc)
    flags = make_var("MWCCFLAGS")
    if a.flags:
        flags = re.sub(r"-O\S*", a.flags, flags)
    if a.file.endswith(".cpp"):
        flags += " " + make_var("MWCCPPFLAGS")
    for f in (obj, elf, raw):
        if os.path.exists(f):
            os.remove(f)
    r = run(mwcc.split() + flags.split() + ["-o", obj, os.path.abspath(a.file)])
    if r.returncode or not os.path.exists(obj):
        print(r.stdout + r.stderr)
        sys.exit(2)
    # Data the C file would add to the image: refuse it, data comes from the asm side. The one exception is
    # a .rodata made only of switch jump tables (one R_MIPS_32 per word): it is linked at the original
    # jtbl_ address and compared byte for byte, and integrate.py splits the data segment there.
    sec = run([os.path.join(BIN, "mipsel-linux-gnu-readelf"), "-S", "-W", obj]).stdout
    jt_size = 0
    for m in re.finditer(r"\]\s+(\S+)\s+\S+\s+[0-9a-f]+\s+[0-9a-f]+\s+([0-9a-f]+)\s+\S+\s+(\S*)", sec):
        name, sz, flg = m.group(1), int(m.group(2), 16), m.group(3)
        if "A" in flg and name not in (".text", ".exceptix", ".exception") and sz:
            if name == ".rodata" and jump_table_only(obj, sz):
                jt_size = sz
                continue
            print(f"{a.file} defines data ({name}, {sz} bytes): use extern D_ symbols, no literals or initialized globals")
            sys.exit(2)
    jt_addr = None
    if jt_size:
        tables = re.findall(r"%hi\((jtbl_[0-9A-F]{8})\)", asm_text(a.func)[1])
        if not tables:
            print(f"{a.file} has a switch jump table where the original {a.func} has none: write it as if/else")
            sys.exit(1)
        jt_addr = min(int(t[5:], 16) for t in tables)
    nm = run([os.path.join(BIN, "mipsel-linux-gnu-nm"), obj]).stdout
    undef = [l.split()[-1] for l in nm.splitlines() if l.split()[0] == "U"]
    named = named_symbols()
    syms = []
    for s in undef:
        if s in named:
            syms.append(f"{s} = {named[s]:#x};")
        elif s in funcs:
            syms.append(f"{s} = {funcs[s][0]:#x};")
        elif m := re.search(r"_([0-9A-F]{8})$", s):
            syms.append(f"{s} = 0x{m.group(1)};")
        else:
            print(f"symbol {s} has no address: name it func_X/D_X or add it to symbol_addrs")
            sys.exit(2)
    defined = {p[2]: int(p[0], 16) for p in (l.split() for l in nm.splitlines()) if len(p) == 3 and p[1] in "Tt?"}
    if a.func not in defined:
        print(f"{a.file} does not define {a.func}")
        sys.exit(2)
    base = addr
    for _ in range(2):
        script = os.path.join(work, "cand.ld")
        with open(script, "w") as f:
            f.write("\n".join(syms) + "\n")
            ro = f".rodata {jt_addr:#x} : {{ *(.rodata) }} " if jt_addr else ""
            f.write(f"SECTIONS {{ .text {base:#x} : SUBALIGN(4) {{ *(.text) }} {ro}/DISCARD/ : {{ *(.mwcats) *(.exceptix) *(.exception) *(.comment) *(.rodata) *(.data) *(.bss) *(.sdata) *(.sbss) }} }}\n")
        r = run([os.path.join(BIN, "mipsel-linux-gnu-ld"), "-EL", "-T", script, "-o", elf, obj])
        if r.returncode:
            print(r.stderr)
            sys.exit(2)
        lnm = run([os.path.join(BIN, "mipsel-linux-gnu-nm"), elf]).stdout
        at = {l.split()[-1]: int(l.split()[0], 16) for l in lnm.splitlines() if len(l.split()) == 3}
        if at[a.func] == addr:
            break
        base += addr - at[a.func]
    run([os.path.join(BIN, "mipsel-linux-gnu-objcopy"), "-O", "binary", "-j", ".text", elf, raw])
    cand_all = open(raw, "rb").read()
    off = addr - base
    nxt = sorted(v for k, v in at.items() if k in defined and v > addr)
    cand = cand_all[off:(nxt[0] - base) if nxt else len(cand_all)]
    orig_path = os.path.join(ROOT, f"orig/{version()}/BOOT.BIN")
    with open(orig_path, "rb") as f:
        f.seek(addr - TEXT_VRAM + TEXT_OFF)
        tgt = f.read(size)
    tpath = os.path.join(work, "target.bin")
    open(tpath, "wb").write(tgt)
    cw = [cand[i:i + 4] for i in range(0, len(cand), 4)]
    tw = [tgt[i:i + 4] for i in range(0, len(tgt), 4)]
    same = sum(1 for x, y in zip(cw, tw) if x == y)
    pct = 100.0 * same / max(len(cw), len(tw))
    if cand == tgt and jt_addr:
        jraw = os.path.join(work, "cand.rodata.bin")
        run([os.path.join(BIN, "mipsel-linux-gnu-objcopy"), "-O", "binary", "-j", ".rodata", elf, jraw])
        with open(orig_path, "rb") as f:
            f.seek(jt_addr - TEXT_VRAM + TEXT_OFF)
            if open(jraw, "rb").read() != f.read(jt_size):
                print(f"{a.func} code matches but its jump tables differ from jtbl_{jt_addr:08X} ({jt_size} bytes)")
                sys.exit(1)
    if cand == tgt:
        # Code the game does not have at this place (an inline destructor emitted out of line for an exception
        # table, a static helper) would shift everything after the unit in the real link.
        extra = sorted(k for k in defined if k != a.func and k not in funcs and not k.startswith("@"))
        if extra and len(cand_all) > len(cand):
            print(f"{a.func} matches but the object adds {len(cand_all) - len(cand)} bytes of other code "
                  f"({', '.join(extra)}): write it without them")
            sys.exit(1)
        jt = f" (jump tables {jt_addr:#010x} {jt_size:#x})" if jt_addr else ""
        print(f"MATCH {a.func} 100%{jt}")
        sys.exit(0)
    cl = [t for v, t in objdump_lines(elf) if v >= addr][:len(cw)]
    tl = [t for _, t in objdump_lines(tpath, addr)]
    print(f"{a.func} {pct:.1f}%  ({len(cw)} words vs {len(tw)} in the original; left: yours, right: original)")
    for i in range(max(len(cl), len(tl))):
        x = cl[i] if i < len(cl) else ""
        y = tl[i] if i < len(tl) else ""
        ok = i < len(cw) and i < len(tw) and cw[i] == tw[i]
        print(f"{'  ' if ok else '!!'} {addr + 4 * i:08X}  {x:42.42} | {y}")
    sys.exit(1)


def cmd_asm(a):
    path, body = asm_text(a.func)
    print(f"; {path}")
    print(body)


def cmd_m2c(a):
    path, body = asm_text(a.func)
    work = os.path.join(ROOT, "build/fmatch", a.func)
    os.makedirs(work, exist_ok=True)
    src = os.path.join(work, "m2c.s")
    lines = [l for l in body.splitlines() if not l.startswith(("endlabel", "nonmatching"))]
    open(src, "w").write(".set noat\n.set noreorder\n.section .text\n" + "\n".join(lines) + "\n")
    # m2c's context parser takes no preprocessor lines: the typedefs of common.h, directives dropped.
    ctx = os.path.join(work, "ctx.h")
    hdr = open(os.path.join(ROOT, "include/common.h")).read()
    open(ctx, "w").write("\n".join(l for l in hdr.splitlines() if not l.lstrip().startswith("#")) + "\n")
    r = run([os.path.join(ROOT, ".venv/bin/python"), "tools/src/m2c/m2c.py", "-t", "mipsel-gcc-c",
             "--context", ctx, src])
    print(r.stdout or r.stderr)


def cmd_decls(a):
    _, body = asm_text(a.func)
    used = set(re.findall(r"\b((?:func|D|jtbl)_[0-9A-F]{8})\b", body)) - {a.func}
    seen = set()
    for path in sorted(glob.glob(f"{ROOT}/src/**/*.c", recursive=True)):
        for line in open(path, encoding="utf-8"):
            s = line.strip()
            if not s.endswith(";") or s in seen:
                continue
            if any(re.search(rf"\b{u}\b", s) for u in used):
                seen.add(s)
                print(s)


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest="cmd", required=True)
    d = sub.add_parser("diff")
    d.add_argument("func")
    d.add_argument("file")
    d.add_argument("--flags", help="replace the -O option of MWCCFLAGS (e.g. -O4,s or -O3)")
    d.add_argument("--kit", help="another compiler kit in tools/compilers/ (e.g. mwccpsp_3.0.1_180)")
    for name in ("asm", "m2c", "decls"):
        sub.add_parser(name).add_argument("func")
    a = p.parse_args()
    {"diff": cmd_diff, "asm": cmd_asm, "m2c": cmd_m2c, "decls": cmd_decls}[a.cmd](a)


if __name__ == "__main__":
    main()
