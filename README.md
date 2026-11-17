# patapon-decomp

A matching decompilation of Patapon (PlayStation Portable, SCE Japan Studio and Pyramid): C source that rebuilds the retail executable byte for byte. The target is Patapon (Europe), UCES-00995, disc 1.00 (redump 18807).

No game data is in this repository. You need an image of your own UMD.

## Status
`PSP_GAME/SYSDIR/BOOT.BIN` (plain ELF, 2,381,348 bytes, about 11,000 functions) rebuilds byte for byte from disassembly. No function is decompiled to C yet.

## Build
```sh
tools/setup.sh                          # pinned toolchain into tools/ and .venv/
git config core.hooksPath tools/hooks
cp /path/to/your/umd.iso disks/         # or a .cso
make check-disk                         # ids, executable format, redump match
make check                              # split, assemble, link, compare the sha1 of BOOT.BIN
```

## Docs
- [What the community already knows](docs/community-knowledge.md)
- [Open questions](docs/mysteries.md)
