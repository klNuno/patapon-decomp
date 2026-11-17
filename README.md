# patapon-decomp

A matching decompilation of Patapon (PlayStation Portable, SCE Japan Studio and Pyramid): C source that rebuilds the retail executable byte for byte. Which game of the series and which region is set by the dump in use.

No game data is in this repository. You need an image of your own UMD.

## Status
Phase 0: tooling and research. No function is decompiled yet.

## Build
```sh
tools/setup.sh                          # pinned toolchain into tools/ and .venv/
git config core.hooksPath tools/hooks
cp /path/to/your/umd.iso disks/         # or a .cso
make check-disk                         # ids, executable format, redump match
```

## Docs
- [What the community already knows](docs/community-knowledge.md)
- [Open questions](docs/mysteries.md)
