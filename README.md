# patapon-decomp

A matching decompilation of **Patapon** (PlayStation Portable, Pyramid and SCE Japan Studio, 2007), European retail release UCES-00995, disc 1.00 (redump 18807). The game code is being rewritten as C and C++ that rebuild the retail executable `BOOT.BIN` byte for byte. Functions not yet in C build from their disassembly, so the whole executable rebuilds at every step. The point is to understand how the game works and to answer, from the code, the questions players still ask about the series: how the debug menus open, what was cut, and what the beta and the trial left behind. Each finding is written for players, with the function and address that prove it.

## At a glance

- **8,464 of 9,755 game functions in C** (86.8 %), **68.31 % of game code bytes** (1,173,524 of 1,717,912); `make check` compares the SHA-1 of the rebuilt `BOOT.BIN` with the retail one in [config/UCES-00995/BOOT.BIN.sha1](config/UCES-00995/BOOT.BIN.sha1).
- **11,068 functions in `BOOT.BIN`**, a plain ELF of 2,381,348 bytes that needs no decryption: 9,755 of the game and 1,313 in Sony's libraries.
- **One compiler, measured on the game's own functions**: Metrowerks CodeWarrior for PSP, `mwccpsp` 3.0.1 build 219 at `-O4,p`; builds 180 to 219 give the same code, 121 to 151 do not.
- **6,333 C and 2,131 C++ units** in `src/f/`, one file per unit, named after its first function.
- **4 findings** in [docs/discoveries.md](docs/discoveries.md), read in the code or measured on the disc files (there is no emulator run yet), and **24 open questions** about the three games in [docs/mysteries.md](docs/mysteries.md), none answered yet.

## Progress

[![Progress map: one rectangle per function of BOOT.BIN, sized by its code bytes](docs/progress/treemap.svg)](docs/progress/treemap.svg)

One rectangle per game function, sized by its code bytes and grouped by 64 KB of address. Grey is still assembly. Mid green is matching C whose body still uses names we did not choose (`unk_` fields, m2c locals, `D_` globals, calls to `func_`). Light green is C where every name is ours: no function has reached it yet, and `progress.json` still counts 27,847 `unk_` fields, 15,628 m2c names, 4,501 `D_` globals and 16,501 `func_` calls in the C. Open the map to hover each function. [docs/progress/progress.json](docs/progress/progress.json) holds the totals and one row per C function under `c_functions` (columns named in `c_columns`); `tools/progress_map.py` regenerates both after a green `make check`.

The bar under the map is the whole executable's code. About 10 % of it is Sony's libraries: 1,313 functions and 196,584 bytes in 0x08820000-0x08826FFF, 0x08829000-0x0884DFFF and 0x08854000-0x08857FFF. They were built with another compiler than the game's, they stay in assembly, and they are not part of Patapon's own figures above.

## Highlights from the findings

- [The US trial is almost the final game, the beta is a third different](docs/discoveries.md#-the-us-trial-is-almost-the-final-game-the-beta-is-a-third-different): 94.0 % of the retail code bytes are in the trial, 63.7 % in the Japanese beta.
- [The beta's colony messages were emptied, but retail still loads them](docs/discoveries.md#-the-betas-colony-messages-were-emptied-but-retail-still-loads-them): the beta disc holds Japanese and English messages that retail ships as an empty file it still opens.
- [Thirteen modules on the beta disc that nothing loads](docs/discoveries.md#-thirteen-modules-on-the-beta-disc-that-nothing-loads): SDK libraries and network samples that the beta never loads.
- [Twelve developer test scenes in every build](docs/discoveries.md#-twelve-developer-test-scenes-in-every-build): Sound Test, Rhythm Test, MoviePlayer Test and nine more, with no known way in yet.

## Where to read

| Page | What it holds |
| --- | --- |
| [docs/discoveries.md](docs/discoveries.md) | The findings, for players first, with the proof folded under each one |
| [docs/mysteries.md](docs/mysteries.md) | The 24 questions about Patapon 1, 2 and 3 that the code can answer: none answered yet, 2 with a lead |
| [docs/community-knowledge.md](docs/community-knowledge.md) | What players, wikis and earlier projects knew before, with sources |
| [docs/how-it-works.md](docs/how-it-works.md) | The build pipeline, the compiler settings, how one function is matched, the tools, the repository layout and its checks |
| [disks/README.md](disks/README.md) | Where your own dump goes and what `make check-disk` does with it |

## Building

You need Linux x86-64 with `bash`, `curl`, `git`, `ar`, `tar` and Python 3 with `venv`, plus an image of your own Patapon UMD (`.iso` or `.cso`). `tools/setup.sh` needs no root: it downloads the rest, checks each download against `tools/toolchain.sha256` and installs it inside the checkout. No game file is provided here.

```sh
tools/setup.sh                          # pinned toolchain into tools/ and .venv/
git config core.hooksPath tools/hooks   # the commit and push checks
cp /path/to/your/umd.iso disks/         # or a .cso, see disks/README.md
make check-disk                         # extracts the UMD, prints its ids and redump match, checks BOOT.BIN
make check                              # splits, assembles, compiles, links, compares the SHA-1 of BOOT.BIN
```

`make check-disk` must print `extract/PSP_GAME/SYSDIR/BOOT.BIN: OK` and `make check` must print `build/UCES-00995/BOOT.BIN: OK`. `make clean` removes `build/UCES-00995/`; `make distclean` also removes `extract/`, `asm/` and `orig/`. How to match one function is in [docs/how-it-works.md](docs/how-it-works.md#matching-a-function).

## How it was made

The C, the names and the docs were written by AI agents, Claude Opus 5.5 and GPT-6.2 Sol, with Sol doing most of the later batches; the smallest functions first came from m2c output. A change was kept only when `make check` still matched.

## Legal

This project is not affiliated with or endorsed by Sony Interactive Entertainment. The repository holds source code, configuration, tools and notes only: no executable, no disc image and no assets. The build reads everything else from a dump you make of a UMD you own. `.gitignore` and the pre-commit hook in `tools/hooks/` refuse disc images, executables and extracted files.

Licensing: the original tooling is under the MIT licence; the reconstructed game code, the data and the documentation are not. See [LICENSING.md](LICENSING.md) for the exact paths.

## Credits

Game knowledge from The Cutting Room Floor (TCRF) and Patapedia; what efonte's patapon-re documents about cheat codes, file lists and the game's scripts; other earlier work by Nemoumbra's PacDecompiler, wizardengineer's psprecomp, idrgn's PBundle and PPEditor, and Pataport ([docs/community-knowledge.md](docs/community-knowledge.md) cites each claim). Disc ids from redump.

Built with splat and spimdisasm, m2c, GNU binutils, wibo, psp-decomp-tools and pycdlib, with the Metrowerks `mwccpsp` compiler from decomp.me's compiler kits; `tools/setup.sh` also installs objdiff, decomp-permuter and asm-differ.
