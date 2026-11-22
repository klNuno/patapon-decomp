# Discoveries

What reading the code of Patapon (Europe, UCES-00995) taught us, compared with the Japanese beta of 2007-08-17 (UCJP-00125) and the US trial (UCUS-98721) where it helps. Each finding below says in plain words what a player would see or notice, then keeps the proof (functions, addresses, files, how it was measured) folded under "Technical details", so it can be checked against the source in `src/f/` or the disassembly. Open questions live in [mysteries.md](mysteries.md), what players and earlier projects knew before is in [community-knowledge.md](community-knowledge.md), and the project itself is described in the [README](../README.md).

Status of each finding:

- 📖 Read in the code: the C or the disassembly of the retail executable says so.
- 📖 Measured on the files: a script or a byte count on the three discs and their executables gives the numbers.

Nothing here has been seen in the game yet: this project has no emulator run, so there are no screenshots.

What the mark before each title means:

- 🆕 New: none of the sources gathered in [community-knowledge.md](community-knowledge.md) mention it.

The script that compares the builds is `tools/compare_builds.py`.

## The findings at a glance

Three builds compared
- 🆕 [The US trial is almost the final game, the beta is a third different](#-the-us-trial-is-almost-the-final-game-the-beta-is-a-third-different): 94.0 % of the retail code bytes are in the trial, 63.7 % in the Japanese beta.

Cut and leftover content
- 🆕 [The beta's colony messages were emptied, but retail still loads them](#-the-betas-colony-messages-were-emptied-but-retail-still-loads-them): a Japanese and English message bank on the beta disc, an empty file in retail that the code still opens.
- 🆕 [Thirteen modules on the beta disc that nothing loads](#-thirteen-modules-on-the-beta-disc-that-nothing-loads): ten SDK libraries and three network samples, named by no executable.

Developer leftovers
- 🆕 [Twelve developer test scenes in every build](#-twelve-developer-test-scenes-in-every-build): from Sound Test to Model Test, registered by all three executables, with no known way in yet.

## Three builds compared

### 🆕 The US trial is almost the final game, the beta is a third different

Three builds of Patapon were compared: a Japanese beta dated 2007-08-17, the US trial and the European retail game. If you played the trial, you played almost the finished code: 94.0 % of the retail code is in it. The beta holds only 63.7 % of it: about a third of the final game's code is missing from the beta or was rewritten after it. That third is where cut or reworked features should show up.

Status: 📖 measured on the files.

<details><summary>Technical details</summary>

All three discs carry a plain `BOOT.BIN` (no decryption needed):

| Build | Serial | `BOOT.BIN` size |
|---|---|---|
| Beta | UCJP-00125 | 2,153,716 bytes |
| Trial | UCUS-98721 | 2,365,700 bytes |
| Retail | UCES-00995 | 2,381,348 bytes |

Each retail function of 16 bytes or more (9,012 of the 11,068 in `config/UCES-00995/functions.tsv`, Sony's libraries included) was searched in the other two by its instructions, with jump targets and address immediates masked so that code that only moved still matches:

| Build | Retail functions found | Share of retail code bytes |
|---|---|---|
| Trial UCUS-98721 | 8,791 of 9,012 | 94.0 % |
| Beta UCJP-00125 | 7,265 of 9,012 | 63.7 % |

- Proof: `tools/compare_builds.py`, run on the retail `BOOT.BIN` and on the beta and trial executables, which stay outside the repository.
- Not checked: the 2,056 retail functions under 16 bytes; a function whose only change is a masked constant or address counts as found; what the missing or rewritten code does has not been read.
- Question: none directly; this comparison is the starting point for cut content such as [question 24](mysteries.md#patapon-1).
- Before us: none of the sources in [community-knowledge.md](community-knowledge.md) compares these three builds.

</details>

## Cut and leftover content

### 🆕 The beta's colony messages were emptied, but retail still loads them

The Japanese beta disc carries a small archive of messages for the "colony", in Japanese and in English. "Colony" is also the internal name of a scene in all three builds. On the trial and retail discs the same file is still there, but empty. The finished game still asks for it: the code that reads these messages survived, only the messages were removed before release.

Status: 📖 measured on the files and read in the code.

<details><summary>Technical details</summary>

`USRDIR/DATA_TLK.BND` is 34,816 bytes on the beta disc and holds one entry, `colony_msg.lbnd`, which packs a Japanese and an English message bank (`jp.bnd`, `us.bnd`, then `colonymsg.pac`). On the retail and trial discs the same file is 2,048 bytes: a BND header with zero entries.

- Proof: the retail executable still names both files: `func_088769F4` passes `colony_msg.lbnd` (`D_089F93C4`) to the loader, and `data_tlk.bnd` is still in the data.
- Not checked: what the messages say, where the game would show them, and what retail does with the empty bank.
- Question: [24](mysteries.md#patapon-1).
- Before us: none of the sources in [community-knowledge.md](community-knowledge.md) mentions this archive.

</details>

### 🆕 Thirteen modules on the beta disc that nothing loads

The beta disc has 13 more system modules than the retail one: ten SDK libraries (checksums, hashes, text encodings, compression, floating point and a random number generator) and three network samples. The beta never loads any of them. They look like the SDK's whole module folder copied onto the disc and never used.

Status: 📖 measured on the files.

<details><summary>Technical details</summary>

The beta's `USRDIR/MODULE/` has 13 more PRX files than retail:

| Kind | Modules |
|---|---|
| SDK libraries | Adler, Base64, deflate, FPU, MD5, MT19937, QP code, SHA-1, SHA-224, SHA-256 |
| Network samples | `SCAN.PRX` (Pspnet_Scan), `SHOW_MACADDR.PRX` (Pspnet_Show_MacAddr), `PSPNET_AP_DIALOG_DUMMY.PRX` |

- Proof: the beta executable names none of them; it loads only `LIBCCC`, `LIBFONT` and `PSMF`, like retail.
- Not checked: that they came with the SDK's module folder is our reading of the evidence, not a record.
- Question: none.
- Before us: none of the sources in [community-knowledge.md](community-knowledge.md) mentions these modules.

</details>

## Developer leftovers

### 🆕 Twelve developer test scenes in every build

The beta, the trial and the retail game all still register a list of twelve developer test scenes: Sound Test, Flash Test, Rhythm Test, Atrac Test, Labo Font Test, Browser Test, Window Test, SoundMessage Test, Bezier Test, PlaySe Test, MoviePlayer Test and Model Test. No way to open this list in the finished game is known yet.

Status: 📖 read in the code.

<details><summary>Technical details</summary>

All three executables register the twelve scenes:

| | | | |
|---|---|---|---|
| Sound Test | Flash Test | Rhythm Test | Atrac Test |
| Labo Font Test | Browser Test | Window Test | SoundMessage Test |
| Bezier Test | PlaySe Test | MoviePlayer Test | Model Test |

`func_0886C018` adds each one with a pair of functions (a name getter such as `func_0886D32C` for "Sound Test", and a factory) through `func_0886ECC8`. It sits in slot 10 of the vtable `D_08A44EC4`, the vtable of the object that `func_089B4814` builds at boot (constructor `func_0886AD10`). The loading groups next to it include `LoadingGroup_Test`.

- Proof: `func_0886C018`, `func_0886ECC8`, `func_0886D32C`, `D_08A44EC4`, `func_089B4814`, `func_0886AD10`.
- Not checked: what calls that vtable slot, whether retail can reach it, and what each test scene does.
- Question: [1](mysteries.md#patapon-1).
- Before us: players know a debug menu present in every Patapon 1 version, opened through a cheat, whose items are minigames, miracles, songs, money, items, units and jumps to a mission, the ending or the title (efonte/patapon-re, Patapedia); none of the sources lists these twelve test scenes, and whether the two are linked is question 1.

</details>
