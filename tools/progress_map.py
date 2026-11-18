#!/usr/bin/env python3
"""Progress map: one rectangle per function of BOOT.BIN, sized by its code bytes, grouped by 64 KB of address.

  tools/progress_map.py [--output docs/progress]

Writes treemap.svg and progress.json. Run it after a green `make check`: it refuses a build whose sha1
is not the original. Functions come from config/<VERSION>/functions.tsv, C bodies from src/.

Each function is at one of three levels:
- asm: still assembly;
- C: matching C whose body still reads a name we did not choose: an unk_ field or `*(T *)(p + 0x..)`
  access, an m2c local or parameter (arg0, temp_s0, var_v0, sp10), a D_ global, a call to a func_;
  a function still called func_XXXXXXXX stays here too;
- read: matching C where every name in its body is ours.
0x08820000-0x08826FFF, 0x08829000-0x0884DFFF and 0x08854000-0x08857FFF hold Sony's libraries (GCC-shaped code and a VFPU math library, not Metrowerks): one bar below the map
shows their share of the code.
"""
import argparse
import hashlib
import html
import json
import pathlib
import re
import subprocess

ROOT = pathlib.Path(__file__).resolve().parent.parent
# Metrowerks game code sits between them (0x08827000-0x08828FFF, 0x0884E000-0x08853FFF, 0x08858000-0x0885FFFF):
# m2c drafts built with mwccpsp match functions of 0x20 bytes and more there and nowhere else in 0x0882-0x0885.
SONY_RANGES = [(0x08820000, 0x08827000), (0x08829000, 0x0884E000), (0x08854000, 0x08858000)]
WINDOW = 0x10000
LEVELS = [  # key, label, fill (an ordinal ramp on the dark surface)
    ("asm", "Assembly", "#4a4f57"),
    ("c", "C, names left to find", "#3fa35a"),
    ("read", "Read: every name ours", "#8fe0a0"),
]
SONY = ("sony", "Sony library", "#5c5b57")
SURFACE, INK, INK2, INK3 = "#1a1a19", "#f0efec", "#c3c2b7", "#8f8d84"
UNKNOWN = {
    "unk_fields": re.compile(r"(?:->|\.)\s*unk_?[0-9A-Fa-f]+\b|\*\s*\(\s*\w+\s*\*+\s*\)\s*\([^()]*\+\s*0x[0-9A-Fa-f]+\s*\)"),
    "m2c_names": re.compile(r"\b(?:arg[0-9]+|temp_[a-z0-9_]+|var_[a-z0-9_]+|sp[0-9A-F]+)\b"),
    "d_globals": re.compile(r"\bD_[0-9A-F]{8}(?:_t)?\b"),
    "func_calls": re.compile(r"\bfunc_[0-9A-F]{8}\b"),
}


def sh(*cmd):
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, check=True).stdout

def strip_comments(src):
    """Blank out comments and string literals, keeping offsets and newlines."""
    out = list(src)
    for m in re.finditer(r'/\*.*?\*/|//[^\n]*|"(?:\\.|[^"\\\n])*"|\'(?:\\.|[^\'\\\n])*\'', src, re.S):
        for i in range(m.start(), m.end()):
            if out[i] != "\n":
                out[i] = " "
    return "".join(out)


def c_functions(path):
    """Map function name -> body text (comments blanked) for every definition of a C unit.

    The declarator is the last line before a top-level brace that holds a parenthesis and does not
    end with a semicolon: K&R definitions are covered, prototypes, struct bodies and initializers are not."""
    code = strip_comments(path.read_text(encoding="utf-8", errors="surrogateescape"))
    funcs, depth, start, last, head = {}, 0, 0, 0, ""
    linkage = []  # `extern "C" {` blocks (the string is blanked by strip_comments): contents count as top level
    for i, ch in enumerate(code):
        if ch == "{":
            if depth == 0 and re.search(r'\bextern\s*$', code[last:i]):
                linkage.append(depth)
                last = i + 1
                continue
            if depth == 0:
                head, start = code[last:i], i
            depth += 1
        elif ch == "}":
            if depth == 0 and linkage:
                linkage.pop()
                last = i + 1
                continue
            depth -= 1
            if depth == 0:
                tail = head.rstrip().split("\n")[-1].rstrip()
                cands = [l for l in head.split("\n") if l[:1].strip() and "(" in l
                         and not l.rstrip().endswith(";") and "=" not in l.split("(")[0]]
                if cands and (tail.endswith(")") or tail.endswith(";")) and "=" not in tail.split("(")[0]:
                    m = re.search(r"(\w+)\s*\(", cands[-1])
                    if m:
                        funcs[m.group(1)] = code[start:i + 1]
                last = i + 1
    return funcs


def squarify(items, x, y, w, h):
    """Squarified treemap (Bruls, Huizing, van Wijk). items: [(weight, payload)], weights > 0."""
    items = sorted(items, key=lambda it: -it[0])
    total = sum(it[0] for it in items)
    out = []
    if not items or w <= 0 or h <= 0:
        return out
    scale = w * h / total
    rest = [(wt * scale, p) for wt, p in items]

    def worst(row, side):
        s = sum(r[0] for r in row)
        return max(max(side * side * r[0] / (s * s), s * s / (side * side * r[0])) for r in row)

    while rest:
        side = min(w, h)
        row = [rest.pop(0)]
        while rest and worst(row + [rest[0]], side) <= worst(row, side):
            row.append(rest.pop(0))
        s = sum(r[0] for r in row)
        if w >= h:  # lay the row as a column on the left
            cw = s / h
            cy = y
            for a, p in row:
                ch = a / cw
                out.append((x, cy, cw, ch, p))
                cy += ch
            x, w = x + cw, w - cw
        else:
            rh = s / w
            cx = x
            for a, p in row:
                cw2 = a / rh
                out.append((cx, y, cw2, rh, p))
                cx += cw2
            y, h = y + rh, h - rh
    return out



def version():
    return (ROOT / "config/VERSION").read_text().strip()


def check_build():
    v = version()
    want = (ROOT / f"config/{v}/BOOT.BIN.sha1").read_text().split()[0]
    path = ROOT / f"build/{v}/BOOT.BIN"
    got = hashlib.sha1(path.read_bytes()).hexdigest() if path.exists() else "missing"
    if got != want:
        raise SystemExit(f"build/{v}/BOOT.BIN is not the original ({got}): run make check first")


def collect():
    rows = []
    for line in (ROOT / f"config/{version()}/functions.tsv").read_text().splitlines():
        if line.startswith("#") or not line.strip():
            continue
        a, s, n = line.split()[:3]
        rows.append((int(a, 16), int(s, 16), n))
    bodies = {}
    for p in sorted((ROOT / "src").rglob("*.c*")):
        if p.suffix in (".c", ".cpp"):
            for name, body in c_functions(p).items():
                bodies[name] = (body, str(p.relative_to(ROOT)))
    groups = {}
    for a, s, n in rows:
        sony = any(lo <= a < hi for lo, hi in SONY_RANGES)
        f = {"name": n, "address": f"0x{a:08X}", "bytes": s}
        if n in bodies:
            body, path = bodies[n]
            f["file"] = path
            for key, rx in UNKNOWN.items():
                f[key] = len(set(rx.findall(body)) - {n})
            f["level"] = "c" if n.startswith("func_") or sum(f[k] for k in UNKNOWN) else "read"
        else:
            f["level"] = "asm"
        key = "sony" if sony else f"{a & ~(WINDOW - 1):08X}"
        groups.setdefault(key, []).append(f)
    units = [{"unit": k, "game": k != "sony", "bytes": sum(f["bytes"] for f in fs), "functions": fs}
             for k, fs in sorted(groups.items())]
    return units


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--output", default="docs/progress")
    args = ap.parse_args()
    check_build()
    commit = sh("git", "rev-parse", "--short", "HEAD").strip()
    dirty = bool(sh("git", "status", "--porcelain", "src", "include", "config").strip())
    units = collect()
    gfuncs = [f for u in units if u["game"] for f in u["functions"]]
    sfuncs = [f for u in units if not u["game"] for f in u["functions"]]
    gbytes = sum(f["bytes"] for f in gfuncs)
    by_level = {k: {"functions": sum(1 for f in gfuncs if f["level"] == k),
                    "bytes": sum(f["bytes"] for f in gfuncs if f["level"] == k)} for k, _, _ in LEVELS}
    cfuncs = [f for f in gfuncs if f["level"] != "asm"]
    totals = {
        "game_functions": len(gfuncs), "game_bytes": gbytes, "levels": by_level,
        "unknowns": {k: sum(f.get(k, 0) for f in cfuncs) for k in UNKNOWN},
        "sony_functions": len(sfuncs), "sony_bytes": sum(f["bytes"] for f in sfuncs),
        "sony_c_functions": sum(1 for f in sfuncs if f["level"] != "asm"),
    }
    report = {
        "schema_version": 1, "commit": commit, "tracked_tree_dirty": dirty,
        "metric": "Code bytes of each function of BOOT.BIN .text (config/<VERSION>/functions.tsv). "
                  "asm: still assembly; c: matching C with names left to find; read: every name ours.",
        "totals": totals, "units": units,
    }
    out = ROOT / args.output
    out.mkdir(parents=True, exist_ok=True)
    # progress.json: totals, then one row per function in C (asm is everything else in functions.tsv)
    small = dict(report, units=None, c_functions=[f for u in units for f in u["functions"] if f["level"] != "asm"])
    del small["units"]
    (out / "progress.json").write_text(json.dumps(small, indent=1) + "\n")
    (out / "treemap.svg").write_text(svg(report))
    in_c = by_level["c"]["bytes"] + by_level["read"]["bytes"]
    print(f"{len(gfuncs)} game functions, {gbytes} bytes: in C {len(cfuncs)} ({100 * in_c / gbytes:.2f} % of bytes), "
          f"read {by_level['read']['functions']}, asm {by_level['asm']['functions']}; "
          f"Sony {len(sfuncs)} functions, {totals['sony_bytes']} bytes; written to {args.output}/")


def svg(r):
    """The map of the game code, grouped by 64 KB of address, then a bar with Sony's libraries beside it."""
    W, H, top, pad = 1200, 820, 124, 28
    t = r["totals"]
    lv = t["levels"]
    g = t["game_bytes"]
    sony = t["sony_bytes"]
    pct = lambda k: 100 * lv[k]["bytes"] / g
    in_c = pct("c") + pct("read")
    n_c = lv["c"]["functions"] + lv["read"]["functions"]
    fill = {k: c for k, _, c in LEVELS}
    e = html.escape
    parts = [
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{W}" height="{H}" viewBox="0 0 {W} {H}" role="img">',
        "<title>Patapon decompilation progress map</title>",
        "<desc>Rectangle area is code bytes of BOOT.BIN. Grey: still assembly. Mid green: matching C with names "
        "left to find. Light green: every name in its body is ours. The bar below places the game code beside "
        "Sony's libraries. Open the file to hover each function.</desc>",
        "<defs><pattern id=\"hatch\" width=\"6\" height=\"6\" patternUnits=\"userSpaceOnUse\" "
        f"patternTransform=\"rotate(45)\"><rect width=\"6\" height=\"6\" fill=\"{SONY[2]}\"/>"
        "<line x1=\"0\" y1=\"0\" x2=\"0\" y2=\"6\" stroke=\"#4a4946\" stroke-width=\"2\"/></pattern></defs>",
        "<style>" + "".join(f".{k}{{fill:{c};stroke:{SURFACE};stroke-width:.4}}" for k, _, c in LEVELS) + "</style>",
        f'<rect width="{W}" height="{H}" rx="16" fill="{SURFACE}"/>',
        '<g font-family="system-ui, -apple-system, Segoe UI, sans-serif">',
        f'<text x="{pad}" y="44" font-size="25" font-weight="700" fill="{INK}">Patapon (PSP, UCES-00995) · decompilation</text>',
        f'<text x="{pad}" y="72" font-size="14" fill="{INK2}">BOOT.BIN rebuilt byte for byte · '
        f'{e(r["commit"])}{" + edits" if r["tracked_tree_dirty"] else ""} · {t["game_functions"]:,} game functions, '
        f'{g:,} code bytes</text>',
        f'<text x="{W - pad}" y="44" text-anchor="end" font-size="30" font-weight="700" fill="{INK}">'
        f'{in_c:.1f}% in C · {pct("read"):.1f}% read</text>',
        f'<text x="{W - pad}" y="72" text-anchor="end" font-size="14" fill="{INK2}">'
        f'{n_c:,} of {t["game_functions"]:,} functions are C</text>',
    ]
    lx = pad
    for k, lab, c in LEVELS:
        lab = f"{lab} {pct(k):.1f}%"
        parts.append(f'<rect x="{lx}" y="92" width="12" height="12" rx="2" fill="{c}"/>')
        parts.append(f'<text x="{lx + 19}" y="103" font-size="14" fill="{INK}">{e(lab)}</text>')
        lx += 19 + 7.6 * len(lab) + 26
    bar_h, foot = 30, 44
    bx, by, bw = pad, top, W - 2 * pad
    bh = H - top - foot - bar_h - 34
    placed = squarify([(u["bytes"], u) for u in r["units"] if u["game"]], bx, by, bw, bh)
    names = {k: l for k, l, _ in LEVELS}
    labels = []
    for ux, uy, uw, uh, u in placed:
        inner = [(f["bytes"], f) for f in u["functions"] if f["bytes"] > 0]
        for fx, fy, fw, fh, f in squarify(inner, ux, uy, uw, uh):
            # a tooltip only where there is room to hover, so the file stays small with 11,000 functions
            tip = f'<title>{e(f["name"])} {f["bytes"]} B, {names[f["level"]]}</title>' if fw * fh >= 40 else ""
            parts.append(f'<rect x="{fx:.1f}" y="{fy:.1f}" width="{fw:.1f}" height="{fh:.1f}" class="{f["level"]}">{tip}</rect>')
        ulab = f'0x{u["unit"]}'
        parts.append(f'<rect x="{ux:.1f}" y="{uy:.1f}" width="{uw:.1f}" height="{uh:.1f}" fill="none" '
                     f'stroke="{SURFACE}" stroke-width="2.5"/>')
        if uw > 7.6 * len(ulab) + 18 and uh > 30:
            labels.append((ux, uy, ulab))
    for ux, uy, ulab in labels:
        tw = 7.6 * len(ulab) + 14
        parts.append(f'<rect x="{ux + 5:.1f}" y="{uy + 5:.1f}" width="{tw:.0f}" height="21" rx="4" '
                     f'fill="{SURFACE}" fill-opacity="0.82"/>')
        parts.append(f'<text x="{ux + 12:.1f}" y="{uy + 20:.1f}" font-size="12.5" fill="{INK}">{e(ulab)}</text>')
    yb = by + bh + 34
    gw = bw * g / (g + sony)
    parts.append(f'<text x="{pad}" y="{yb - 9}" font-size="13" fill="{INK2}">All the code of BOOT.BIN</text>')
    sx = bx
    for k, _, c in reversed(LEVELS):
        sw = (gw - 2) * lv[k]["bytes"] / g
        if sw > 0:
            parts.append(f'<rect x="{sx:.2f}" y="{yb}" width="{sw:.2f}" height="{bar_h}" fill="{c}"/>')
        sx += sw
    glab = f"Game code {100 * g / (g + sony):.0f}%: mapped above"
    parts.append(f'<rect x="{bx + 6}" y="{yb + 5}" width="{7.4 * len(glab) + 14:.0f}" height="{bar_h - 10}" rx="3" '
                 f'fill="{SURFACE}" fill-opacity="0.82"/>')
    parts.append(f'<text x="{bx + 13}" y="{yb + 20}" font-size="13" fill="{INK}">{e(glab)}</text>')
    parts.append(f'<rect x="{bx + gw + 2:.2f}" y="{yb}" width="{bw - gw - 2:.2f}" height="{bar_h}" rx="4" fill="url(#hatch)">'
                 f'<title>Sony libraries, 0x08820000-0x08826FFF, 0x08829000-0x0884DFFF and 0x08854000-0x08857FFF</title></rect>')
    slab = f"Sony libraries {100 * sony / (g + sony):.0f}%"
    parts.append(f'<rect x="{bx + gw + 8:.2f}" y="{yb + 5}" width="{7.4 * len(slab) + 14:.0f}" height="{bar_h - 10}" rx="3" '
                 f'fill="{SURFACE}" fill-opacity="0.82"/>')
    parts.append(f'<text x="{bx + gw + 15:.2f}" y="{yb + 20}" font-size="13" fill="{INK}">{e(slab)}</text>')
    parts.append(f'<text x="{pad}" y="{H - 15}" font-size="12" fill="{INK3}">Area = code bytes · groups = 64 KB of '
                 f'address · open the file and hover each function · Sony\'s libraries (GCC-built) sit apart</text>')
    parts.append("</g></svg>")
    return "\n".join(parts) + "\n"


if __name__ == "__main__":
    main()
