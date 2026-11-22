# patapon-decomp

A matching decompilation of Patapon (PlayStation Portable, SCE Japan Studio and Pyramid): C and C++ source that rebuilds the retail executable byte for byte. The target is Patapon (Europe), UCES-00995, disc 1.00 (redump 18807). Functions not yet written in C are built from their disassembly, so the whole executable rebuilds at every step.

**UCES-00995** · **8,464 of 9,755** game functions in C · **68.31 %** of game code bytes in C · **byte-for-byte** rebuild of `BOOT.BIN`

> [!NOTE]
> No game data is in this repository. You need an image of your own UMD.

## Contents

- [Status](#status)
- [Quick start](#quick-start)
- [Matching one function](#matching-one-function)
- [Repository layout](#repository-layout)
- [Documentation](#documentation)
- [Game data and legal note](#game-data-and-legal-note)

## Status

| | |
|---|---|
| Target | Patapon (Europe), UCES-00995, disc 1.00, [redump](config/redump.tsv) disc 18807 |
| Executable | `PSP_GAME/SYSDIR/BOOT.BIN`: plain ELF, 2,381,348 bytes, 11,068 functions (9,755 game, 1,313 in Sony's libraries) |
| Compiler | Metrowerks CodeWarrior for PSP, `mwccpsp` 3.0.1 build 219 (builds 180 to 219 give the same code), `-O4,p`, measured on the game's own functions |
| Functions in C | 8,464 of 9,755 game functions (86.8 %) |
| Code bytes in C | 1,173,524 of 1,717,912 game code bytes (68.31 %) |
| Sony libraries | 1,313 functions, 196,584 bytes, built with another compiler, still assembly |
| Rebuild check | `make check` compares the SHA-1 of the rebuilt `BOOT.BIN` with [config/UCES-00995/BOOT.BIN.sha1](config/UCES-00995/BOOT.BIN.sha1) |

The figures come from [docs/progress/progress.json](docs/progress/progress.json), which `tools/progress_map.py` regenerates with the map below after a green `make check`.

[![Progress map: one rectangle per function of BOOT.BIN, sized by its code bytes](docs/progress/treemap.svg)](docs/progress/treemap.svg)

One rectangle per function, sized by its code bytes and grouped by 64 KB of address:

| Colour | Meaning |
|---|---|
| Grey | Still assembly |
| Mid green | Matching C whose body still uses names we did not choose (`unk_` fields, m2c locals, `D_` globals, calls to `func_`) |
| Light green | C where every name is ours |

The bar under the map places the game code beside Sony's libraries (0x08820000-0x08826FFF, 0x08829000-0x0884DFFF and 0x08854000-0x08857FFF). Open the map to hover each function. `progress.json` holds the totals and the list of C functions, one row each under `c_columns`.

## Quick start

Linux on x86-64 with `bash`, `curl`, `git`, `ar`, `tar` and `python3` (with `venv`). `tools/setup.sh` needs no root: it downloads the rest, checks each download against `tools/toolchain.sha256` and installs it inside the checkout.

```sh
tools/setup.sh                          # pinned toolchain into tools/ and .venv/
git config core.hooksPath tools/hooks   # the commit and push checks
cp /path/to/your/umd.iso disks/         # or a .cso, see disks/README.md
make check-disk                         # ids, executable format, redump match
make check                              # split, assemble, link, compare the sha1 of BOOT.BIN
```

`make check` ends with `build/UCES-00995/BOOT.BIN: OK` when the rebuild matches. `make clean` removes `build/UCES-00995/`; `make distclean` also removes `extract/`, `asm/` and `orig/`.

## Matching one function

```sh
.venv/bin/python -I tools/fmatch.py asm func_089506BC          # the original
.venv/bin/python -I tools/fmatch.py m2c func_089506BC          # a first draft
.venv/bin/python -I tools/fmatch.py decls func_089506BC        # declarations already in src/ for its symbols
.venv/bin/python -I tools/fmatch.py diff func_089506BC my.c    # MATCH, or the rows that differ
.venv/bin/python -I tools/integrate.py my.c && make split && make check
```

1. `asm` prints the original instructions, `m2c` a first C draft to start from.
2. `diff` compiles the file with the game's compiler and flags, links it at the function's address and compares the bytes with the retail executable. It prints `MATCH func_089506BC 100%` or the differing rows marked `!!`.
3. `integrate.py` checks the file again, copies it to `src/f/` and rewrites the splat config so the function is built from C.
4. `make check` decides: a match in isolation is necessary, not sufficient.

The build pipeline, the compiler settings and the rules for source files are in [How it works](docs/how-it-works.md).

## Repository layout

| Path | What it holds |
|---|---|
| [`src/f/`](src/f) | Matched units, one file per unit named after its first function (6,333 `.c`, 2,131 `.cpp`) |
| [`include/`](include) | Shared types (`common.h`), the `INCLUDE_ASM` macros and assembler includes |
| [`config/UCES-00995/`](config/UCES-00995) | splat config, symbol addresses, the list of every function, jump tables, target SHA-1 |
| [`config/VERSION`](config/VERSION) | Serial of the dump being built |
| [`config/redump.tsv`](config/redump.tsv) | Known retail dumps of the three games, for `make check-disk` |
| [`tools/`](tools) | Setup, disc reader, matching and progress tools, git hooks |
| [`docs/`](docs) | Findings, open questions, community knowledge, progress map |
| [`disks/`](disks/README.md) | Your own dump (never tracked) |
| `extract/`, `orig/`, `asm/`, `build/` | Generated by `make`, never tracked |

## Documentation

| Page | What it covers |
|---|---|
| [How it works](docs/how-it-works.md) | Build pipeline, compiler, matching tools, repository checks |
| [Discoveries](docs/discoveries.md) | What the code shows, with the functions and data each finding comes from |
| [Open questions](docs/mysteries.md) | Questions about the three games that the code can answer |
| [What the community already knows](docs/community-knowledge.md) | Claims from wikis and earlier projects, with sources, before this project checks them |

## Game data and legal note

This repository holds source code, configuration, tools and notes only: no executable, no disc image and no assets. The build reads everything else from a dump you make of a UMD you own. `.gitignore` and the pre-commit hook in `tools/hooks/` refuse disc images, executables and extracted files.

This project is not affiliated with or endorsed by Sony Interactive Entertainment.
