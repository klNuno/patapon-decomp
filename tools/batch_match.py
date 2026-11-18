#!/usr/bin/env python3
"""Run psp-decomp-tools' batch_units.py (m2c drafts and their mechanical variants, compiled and compared)
over the functions still in assembly, and write each matching source to OUT/<FUNC>.c or .cpp, one
function per file, for tools/integrate.py (which checks each again with fmatch.py before taking it).

  tools/batch_match.py OUT [--start 0x08860000] [--end 0x089D7830] [--min-size 8] [--max-size 0x80]
                           [--max-calls 2] [-j 3] [--show FUNC]

The compiler and flags are the Makefile's (MWCC_VER, MWCCFLAGS). The Sony library range
Sony library ranges (0x08820000-0x08826FFF, 0x08829000-0x0884DFFF and 0x08854000-0x08857FFF) are not Metrowerks code and are left out unless --start/--end name them.
"""
import argparse
import os
import re
import subprocess
import sys
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
os.environ["DECOMP_ROOT"] = str(ROOT)
# m2c is a checkout in tools/src/m2c, run as `python -m m2c.main` by batch_units
os.environ["PYTHONPATH"] = str(ROOT / "tools/src/m2c") + os.pathsep + os.environ.get("PYTHONPATH", "")
sys.path.insert(0, str(ROOT / "tools/src/psp-decomp-tools"))
import project  # noqa: E402

RANGES = [(0x08804000, 0x08820000), (0x08827000, 0x08829000), (0x0884E000, 0x08854000), (0x08858000, 0x089D7830)]


def make_var(name):
    return subprocess.run(["make", "-s", "--no-print-directory", f"print-{name}"], cwd=ROOT,
                          capture_output=True, text=True, check=True).stdout.strip()


_kit = make_var("MWCC_VER")
_flags = [f for f in make_var("MWCCFLAGS").split() if f.startswith("-O")]
project.compiler = lambda: ([str(ROOT / "tools/bin/wibo"), str(ROOT / f"tools/compilers/{_kit}/mwccpsp.exe")], _flags)
project.binutil = lambda name: ROOT / "tools/bin" / f"mipsel-linux-gnu-{name}"
import batch_units as bu  # noqa: E402


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    num = lambda x: int(x, 0)  # noqa: E731
    p.add_argument("out")
    p.add_argument("--start", type=num)
    p.add_argument("--end", type=num)
    p.add_argument("--min-size", type=num, default=8)
    p.add_argument("--max-size", type=num, default=0x80)
    p.add_argument("--max-calls", type=int, default=2)
    p.add_argument("-j", "--jobs", type=int, default=3)
    p.add_argument("--show")
    a = p.parse_args()
    cfg = bu.Config(project.DEFAULT_VERSION, project.DEFAULT_MODULE)
    cfg.ranges = [(a.start, a.end or 1 << 32)] if a.start is not None else RANGES
    funcs = sorted(bu.read_functions(sorted(project.asm_dir(cfg.version, cfg.module).glob("text*.s"))),
                   key=lambda f: f["addr"])
    callees = bu.Callees(cfg, funcs)
    cfg.guessed = bu.guess_prototypes(cfg, callees, funcs)
    if a.show:
        f = next(f for f in funcs if f["name"] == a.show)
        print(bu.solve(f, cfg, callees, verbose=True)[0])
        return
    os.makedirs(a.out, exist_ok=True)
    # resumable: functions already written or recorded as tried in OUT/tried.tsv are skipped
    tried_path = Path(a.out, "tried.tsv")
    tried = {l.split("\t")[0] for l in tried_path.read_text().splitlines()} if tried_path.exists() else set()
    # functions already in C, or handed to a matcher batch of a wave (work/wave*/b*.txt), are left alone
    tried |= {p.stem for p in (ROOT / "src").rglob("*.c*")}
    for b in (ROOT / "work").glob("wave*/b*.txt"):
        tried |= set(b.read_text().split())
    todo = [f for f in funcs if bu.eligible(f, cfg, a) and f["name"] not in tried]
    print(f"{len(todo)} functions to try, {a.jobs} workers", flush=True)
    states = {}
    n = 0
    # written as results come in, so a killed run keeps what it found
    with ProcessPoolExecutor(a.jobs, initializer=bu._init_worker, initargs=(cfg, callees)) as pool, \
            open(tried_path, "a") as log:
        for f, state, src, lang in pool.map(bu._solve_worker, todo, chunksize=4):
            key = re.split(r" at | 0x", state)[0]
            states[key] = states.get(key, 0) + 1
            if state == "OK":
                Path(a.out, f"{f['name']}.{lang}").write_text(src, encoding="utf-8", newline="\n")
                n += 1
            log.write(f"{f['name']}\t{state}\n")
            log.flush()
    print(", ".join(f"{k}: {v}" for k, v in sorted(states.items(), key=lambda x: -x[1])))
    print(f"{n} sources written to {a.out}")


if __name__ == "__main__":
    main()
