# Discoveries

Findings read from the code of Patapon (Europe, UCES-00995), compared with the Japanese beta of 2007-08-17 (UCJP-00125) and the US trial (UCUS-98721) where it helps. Each finding names the functions or data it comes from; captures are from an emulator, in `img/game/`. Open questions waiting for an answer: [mysteries.md](mysteries.md).

## Three builds side by side

All three discs carry a plain BOOT.BIN (no decryption needed): beta 2,153,716 bytes, trial 2,365,700, retail 2,381,348. Each retail function of 16 bytes or more was searched in the other two by its instructions, with jump targets and address immediates masked so that code that only moved still matches:

| Build | Retail functions found | Share of retail code bytes |
|---|---|---|
| Trial UCUS-98721 | 8,791 of 9,012 | 94.0 % |
| Beta UCJP-00125 | 7,265 of 9,012 | 63.7 % |

The trial is nearly the retail code. A third of the retail code bytes are absent from or rewritten since the beta: that is where to look for cut or reworked features.

## The beta's talk archive

`USRDIR/DATA_TLK.BND` is 34,816 bytes on the beta disc and holds one entry, `colony_msg.lbnd`, which packs a Japanese and an English message bank (`jp.bnd`, `us.bnd`, then `colonymsg.pac`). On the retail and trial discs the same file is 2,048 bytes: a BND header with zero entries.

The retail executable still names both files: `func_088769F4` passes `colony_msg.lbnd` (D_089F93C4) to the loader, and `data_tlk.bnd` is still in the data. The code that reads the messages survived; only their content was emptied before release. "Colony" is also the internal name of a scene in all three builds.

## Modules only on the beta disc

The beta's `USRDIR/MODULE/` has 13 more PRX files than retail: SDK libraries (Adler, Base64, deflate, FPU, MD5, MT19937, QP code, SHA-1, SHA-224, SHA-256) and three network samples (`SCAN.PRX` = Pspnet_Scan, `SHOW_MACADDR.PRX` = Pspnet_Show_MacAddr, `PSPNET_AP_DIALOG_DUMMY.PRX`). The beta executable names none of them; it loads only `LIBCCC`, `LIBFONT` and `PSMF`, like retail. They were copied onto the disc with the SDK's module folder and never used.

## A test-scene menu in every build

All three executables register twelve developer test scenes: Sound Test, Flash Test, Rhythm Test, Atrac Test, Labo Font Test, Browser Test, Window Test, SoundMessage Test, Bezier Test, PlaySe Test, MoviePlayer Test, Model Test. `func_0886C018` adds each one with a pair of functions (a name getter such as `func_0886D32C` for "Sound Test", and a factory) through `func_0886ECC8`. It sits in slot 10 of the vtable D_08A44EC4, the vtable of the object that `func_089B4814` builds at boot (constructor `func_0886AD10`). The loading groups next to it include `LoadingGroup_Test`. Still open: what calls that vtable slot, and whether retail can reach it (question 1).
