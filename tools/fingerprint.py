#!/usr/bin/env python3
# SPDX-License-Identifier: MIT
"""Count compiler fingerprints in splat asm: register move and zero encodings, prologue store order,
branch-likely and movz/movn rates, sibling calls, bit-field clears; over the whole text and per window.

usage: fingerprint.py <asm.s> [<asm.s> ...] [--window 0x40000]
"""

import argparse
import re
from collections import Counter
from pathlib import Path

LINE = re.compile(r"^\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(\S+)\s*(.*)$")
GLABEL = re.compile(r"^glabel (\S+)")
BRANCH = {"beq", "bne", "blez", "bgtz", "bltz", "bgez", "bltzal", "bgezal",
          "bc1t", "bc1f", "beqz", "bnez", "bvf", "bvt"}
LIKELY = {b + "l" for b in BRANCH}


def functions(paths):
    """[(name, [(addr, mnemonic, operands)])]"""
    funcs, cur = [], None
    for p in paths:
        for line in Path(p).read_text().splitlines():
            if m := GLABEL.match(line.strip()):
                cur = (m.group(1), [])
                funcs.append(cur)
            elif cur and (m := LINE.match(line)):
                cur[1].append((int(m.group(1), 16), m.group(2), m.group(3).replace(" ", "")))
    return funcs


def count(funcs) -> Counter:
    c = Counter()
    for _, ins in funcs:
        c["functions"] += 1
        c["words"] += len(ins)
        frame = False
        first_store = None
        for i, (_, mn, ops) in enumerate(ins):
            args = ops.split(",")
            if mn in ("addu", "or", "daddu") and len(args) == 3:
                if args[1] == "$zero" and args[2] == "$zero":
                    c[f"zero_{mn}"] += 1
                elif args[2] == "$zero":
                    c[f"move_{mn}"] += 1
            if mn == "ori" and len(args) == 3 and args[1] == "$zero" and args[2] in ("0", "0x0"):
                c["zero_ori"] += 1
            if mn in BRANCH:
                c["branch"] += 1
            elif mn in LIKELY:
                c["branch_likely"] += 1
            if mn in ("movz", "movn"):
                c["movz_movn"] += 1
            if mn == "ins":
                c["ins_zero" if args[1:2] == ["$zero"] else "ins_reg"] += 1
            if mn == "j" and not ops.startswith(".L"):
                c["j_to_symbol"] += 1
            if i < 2 and mn == "addiu" and ops.startswith("$sp,$sp,-"):
                frame = True
            if frame and first_store is None and mn == "sw" and ops.endswith("($sp)") and i < 12:
                first_store = args[0]
        if frame and first_store:
            c["frames"] += 1
            if first_store == "$ra":
                c["ra_first"] += 1
    return c


def report(label: str, c: Counter) -> str:
    br = c["branch"] + c["branch_likely"]
    moves = c["move_addu"] + c["move_or"]
    return (f"{label}: {c['functions']} functions, {c['words']} words | "
            f"move addu {c['move_addu']} or {c['move_or']} ({c['move_addu'] / max(moves, 1):.1%} addu) | "
            f"zero addu {c['zero_addu']} or {c['zero_or']} ori {c['zero_ori']} | "
            f"sw ra first {c['ra_first']}/{c['frames']} ({c['ra_first'] / max(c['frames'], 1):.0%}) | "
            f"branch-likely {c['branch_likely']}/{br} ({c['branch_likely'] / max(br, 1):.2f}) | "
            f"movz/movn {c['movz_movn']} ({1000 * c['movz_movn'] / max(c['words'], 1):.1f}/1000 words) | "
            f"j to a symbol {c['j_to_symbol']} | ins $zero {c['ins_zero']} ins reg {c['ins_reg']}")


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("asm", nargs="+")
    ap.add_argument("--window", type=lambda s: int(s, 0), default=0)
    a = ap.parse_args()
    funcs = functions(a.asm)
    print(report("all", count(funcs)))
    if a.window:
        groups: dict[int, list] = {}
        for f in funcs:
            if f[1]:
                groups.setdefault(f[1][0][0] // a.window * a.window, []).append(f)
        for base in sorted(groups):
            print(report(f"{base:08X}", count(groups[base])))


if __name__ == "__main__":
    main()
