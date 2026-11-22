# Your own dump

[Back to the README](../README.md)

Put an image of your own Patapon UMD here, `.iso` or `.cso` (any name), and only one. Nothing in this folder except this file is tracked.

```sh
make check-disk
```

| Step | Output |
|---|---|
| Decompress | A CSO is decompressed into `build/disk.iso` (an ISO is copied) |
| Extract | Every file of the UMD is copied into `extract/` |
| Report | The UMD id, the `PARAM.SFO` fields, the format of `BOOT.BIN` and `EBOOT.BIN`, and the redump disc it matches ([config/redump.tsv](../config/redump.tsv)) |
| Check | The SHA-1 of `extract/PSP_GAME/SYSDIR/BOOT.BIN` against [config/UCES-00995/BOOT.BIN.sha1](../config/UCES-00995/BOOT.BIN.sha1) |

The build target is Patapon (Europe), UCES-00995, disc 1.00 (redump 18807). `config/redump.tsv` also lists other retail dumps of the three games so that `make check-disk` can name them, but only UCES-00995 has a build configuration.
