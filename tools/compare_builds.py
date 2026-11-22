#!/usr/bin/env python3
# SPDX-License-Identifier: MIT
"""Find each retail function in another build of the executable by masked instruction words.

  tools/compare_builds.py . <other BOOT.BIN> <out.tsv>    (for example the beta or trial executable, outside the repo)

Masks jump targets and the immediates of lui/addiu/ori and loads/stores, so code that only moved matches.
Writes retail name, retail addr, size, other addr (or -) and prints coverage plus the other build's
unmatched code runs (code the retail build no longer has).
"""
import struct
import sys
from pathlib import Path


def load_elf(path):
    b = Path(path).read_bytes()
    phoff, = struct.unpack_from("<I", b, 0x1C)
    phnum, = struct.unpack_from("<H", b, 0x2C)
    segs = []
    for i in range(phnum):
        t, off, va, pa, fsz, msz, fl, al = struct.unpack_from("<8I", b, phoff + i * 32)
        if t == 1 and fsz:
            segs.append((va, off, fsz, fl))
    return b, segs


def mask(w):
    op = w >> 26
    if op in (2, 3):
        return w & 0xFC000000
    if op in (0x0F, 0x09, 0x0D) or op >= 0x20:
        return w & 0xFFFF0000
    return w


def words(b, off, n):
    return [mask(x) for x in struct.unpack_from(f"<{n}I", b, off)]


def main():
    repo, other, out = sys.argv[1:4]
    rb, rsegs = load_elf(Path(repo) / "orig/UCES-00995/BOOT.BIN")
    rva, roff, _, _ = rsegs[0]
    funcs = []
    for l in open(Path(repo) / "config/UCES-00995/functions.tsv"):
        if l.startswith("#") or not l.strip():
            continue
        a, s, n = l.split()[:3]
        funcs.append((int(a, 16), int(s, 16), n))
    ob, osegs = load_elf(other)
    ova, ooff, ofsz, _ = osegs[0]
    ow = words(ob, ooff, ofsz // 4)
    index = {}
    for a, s, n in funcs:
        if s < 0x10:
            continue
        fw = words(rb, roff + a - rva, s // 4)
        index.setdefault(tuple(fw[:4]), []).append((a, s, n, fw))
    found = {}
    used = bytearray(len(ow))
    for i in range(len(ow) - 4):
        for a, s, n, fw in index.get(tuple(ow[i:i + 4]), ()):
            if n not in found and ow[i:i + len(fw)] == fw:
                found[n] = ova + i * 4
                used[i:i + len(fw)] = b"\1" * len(fw)
    with open(out, "w") as f:
        for a, s, n in funcs:
            f.write(f"{n}\t{a:08X}\t{s:X}\t{found[n]:08X}\n" if n in found else f"{n}\t{a:08X}\t{s:X}\t-\n")
    big = [(a, s, n) for a, s, n in funcs if s >= 0x10]
    hit = sum(s for a, s, n in big if n in found)
    print(f"{other}: {len(found)} of {len(big)} retail functions (>= 0x10 B) found, "
          f"{hit / sum(s for _, s, _ in big):.1%} of their bytes; other text {ofsz:#x} B at {ova:#x}")
    runs, start = [], None
    for i, u in enumerate(used + b"\1"):
        if not u and start is None:
            start = i
        elif u and start is not None:
            if (i - start) * 4 >= 0x100:
                runs.append((ova + start * 4, (i - start) * 4))
            start = None
    print(f"unmatched runs >= 0x100 B in the other build: {len(runs)}, {sum(r[1] for r in runs):#x} B")
    Path(out).with_suffix(".runs").write_text("".join(f"{a:08X}\t{s:X}\n" for a, s in runs))


if __name__ == "__main__":
    main()
