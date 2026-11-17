#!/usr/bin/env python3
"""Put matched C files into the build: src/f/<FUNC>.c plus a `c` subsegment in the splat config.

  tools/integrate.py FILE.c [FILE.c ...] [--no-check]
      Each FILE.c (or .cpp) defines one function FUNC (its name is the file name). The file is checked with
      `fmatch.py diff` first (skip a non-match), copied to src/f/FUNC.c, and the text subsegments of
      config/<VERSION>/splat.boot.yaml are rewritten: one `[off, c, f/FUNC]` per C unit, asm chunks
      `text_<VRAM>` between them. Then run `make split` and `make check`.
  tools/integrate.py --rebuild-yaml
      Rewrite the subsegment block from the units already in src/ (after removing one by hand).

A unit file may hold several contiguous functions, in address order: src/f/<FIRST>.c, every function
it defines must follow the previous one in functions.tsv.
"""
import argparse
import os
import re
import shutil
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
TEXT_VRAM, TEXT_OFF = 0x08804000, 0x54
FIRST = "      - [0x54, asm, text]\n"
DEF = re.compile(r"^[A-Za-z_][\w \t\*]*?\b(func_[0-9A-F]{8})\s*\([^;{]*\)\s*\{", re.M)


def version():
    return open(os.path.join(ROOT, "config/VERSION")).read().strip()


def functions():
    rows = []
    for line in open(os.path.join(ROOT, f"config/{version()}/functions.tsv")):
        if line.startswith("#") or not line.strip():
            continue
        addr, size, name = line.split()[:3]
        rows.append((int(addr, 16), int(size, 16), name))
    return rows


def unit_range(path, table):
    """(start, end) VRAM of the unit: its functions must be contiguous and in address order."""
    by_name = {n: (a, s) for a, s, n in table}
    names = DEF.findall(open(path, encoding="utf-8").read())
    if not names:
        sys.exit(f"{path}: no func_XXXXXXXX definition found")
    start = by_name[names[0]][0]
    end = start
    for n in names:
        a, s = by_name[n]
        if a != end:
            sys.exit(f"{path}: {n} at {a:#x} does not follow the previous function (expected {end:#x})")
        end = a + s
    return start, end


def rebuild_yaml():
    table = functions()
    units = []
    for dirpath, _, files in os.walk(os.path.join(ROOT, "src")):
        for f in files:
            if f.endswith((".c", ".cpp")):
                path = os.path.join(dirpath, f)
                start, end = unit_range(path, table)
                name, ext = os.path.splitext(os.path.relpath(path, os.path.join(ROOT, "src")))
                units.append((start, end, name, "cpp" if ext == ".cpp" else "c"))
    units.sort()
    for (s1, e1, n1, _), (s2, _, n2, _) in zip(units, units[1:]):
        if s2 < e1:
            sys.exit(f"units overlap: {n1} and {n2}")
    lines = [FIRST] if not units or units[0][0] != TEXT_VRAM else []
    for i, (start, end, name, kind) in enumerate(units):
        lines.append(f"      - [{start - TEXT_VRAM + TEXT_OFF:#X}, {kind}, {name}]\n".replace("0X", "0x"))
        nxt = units[i + 1][0] if i + 1 < len(units) else None
        if nxt != end:
            lines.append(f"      - [{end - TEXT_VRAM + TEXT_OFF:#X}, asm, text_{end:08X}]\n".replace("0X", "0x"))
    path = os.path.join(ROOT, f"config/{version()}/splat.boot.yaml")
    txt = open(path).read()
    head, rest = txt.split("    subsegments:\n", 1)
    stub = rest.index("      - [0x1D3884, asm, sce_stub]")
    open(path, "w").write(head + "    subsegments:\n" + "".join(lines) + rest[stub:])
    print(f"{len(units)} C units in {os.path.relpath(path, ROOT)}")


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("files", nargs="*")
    p.add_argument("--no-check", action="store_true", help="skip the fmatch gate")
    p.add_argument("--rebuild-yaml", action="store_true")
    a = p.parse_args()
    table = functions()
    names = {n for _, _, n in table}
    added = []
    for f in a.files:
        func, ext = os.path.splitext(os.path.basename(f))
        if func not in names:
            print(f"skip {f}: {func} is not a function of functions.tsv")
            continue
        dst = os.path.join(ROOT, "src/f", func + ext)
        if os.path.exists(dst):
            print(f"skip {f}: {os.path.relpath(dst, ROOT)} exists")
            continue
        if not a.no_check:
            r = subprocess.run([os.path.join(ROOT, ".venv/bin/python"), "-I", os.path.join(ROOT, "tools/fmatch.py"),
                                "diff", func, os.path.abspath(f)], cwd=ROOT, capture_output=True, text=True)
            if r.returncode:
                print(f"skip {f}: {r.stdout.splitlines()[0] if r.stdout else r.stderr.strip()}")
                continue
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        shutil.copyfile(f, dst)
        added.append(func)
    if added or a.rebuild_yaml:
        rebuild_yaml()
    print(f"integrated {len(added)}: {' '.join(added)}")


if __name__ == "__main__":
    main()
