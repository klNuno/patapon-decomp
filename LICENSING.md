# Licensing

[Back to the README](README.md)

This repository does not carry one licence for everything. Only the original tooling listed below is under the MIT licence. Every other file keeps its own status, given in the second and third tables. A file that no table lists is not licensed.

## Under the MIT licence

These files were written for this project. Their copyright holder is klNuno, the owner of this repository, 2026. The files that can carry a comment have an `SPDX-License-Identifier: MIT` line. The others are covered by this list alone.

| Path | What it is | Marked in the file |
| --- | --- | --- |
| `tools/batch_match.py`, `tools/compare_builds.py`, `tools/disc.py`, `tools/fingerprint.py`, `tools/fmatch.py`, `tools/integrate.py`, `tools/progress_map.py` | Build, matching, disc and report scripts | yes |
| `tools/setup.sh` | Toolchain installer | yes |
| `tools/requirements.in` | Top-level Python requirements | yes |
| `decomp.toml` | Settings for the matching tools | yes |
| `include/common.h` | Basic integer and float types | yes |
| `Makefile` | Build rules | no |
| `tools/hooks/pre-commit`, `tools/hooks/pre-push` | Git hooks | no |
| `tools/versions.env` | Pinned tool versions | no |
| `.gitignore` | Ignore rules | no |

The MIT licence text:

```text
MIT License

Copyright (c) 2026 klNuno

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

## Third-party files

| Path | Origin | Licence and notice |
| --- | --- | --- |
| `include/include_asm.h`, `include/labels.inc`, `include/macro.inc` | Generated from splat's file presets | MIT, Copyright (c) 2021 Ethan Roseman (splat's licence). Our MIT grant does not cover them. |

`tools/setup.sh` downloads binutils, the compiler kits, wibo, objdiff, splat, m2c, decomp-permuter, asm-differ and psp-decomp-tools into ignored folders. None of them is in this repository, and each stays under its own licence.

## Not licensed

| Path | Why |
| --- | --- |
| `src/` | C and C++ reconstructed from the retail executable so that it compiles to the same bytes. It follows the structure of the original program and includes Sony library functions. No licence is granted. |
| `config/` | Addresses, symbol names, function and jump table lists, the splat layout and the target hashes, all read from the game. `config/redump.tsv` holds disc hashes from the Redump database. |
| `docs/progress/` | The progress map and its data, generated from the build. |
| `README.md`, `LICENSING.md`, `docs/`, `disks/README.md` | Documentation. It describes the game, quotes community wikis with their sources and may later get a licence of its own. |
| `tools/toolchain.sha256`, `tools/requirements.lock` | Generated hash lists of downloaded tools. |

Patapon and its code, data, names and images belong to their rights holders. This repository ships none of the game's files, and building it needs your own dump of the game.
