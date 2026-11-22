# What the community already knows

[Back to the README](../README.md) · [Discoveries](discoveries.md) · [Open questions](mysteries.md)

What players, wikis and earlier technical projects said about Patapon 1, 2 and 3 (PSP, SCE Japan Studio and Pyramid, 2007 to 2011) before this project read the code for itself, gathered on 2026-11-17. A claim goes in only when its source could be opened. Nothing here is trusted until this project's own reading confirms it. The open questions drawn from the gaps are in [Open questions](mysteries.md).

## Contents

- [How to read the tables](#how-to-read-the-tables)
- [Patapon 1](#patapon-1)
- [Patapon 2](#patapon-2)
- [Patapon 3](#patapon-3)

## How to read the tables

| Status | Meaning |
|---|---|
| data | Read in the game files or memory by an earlier project (cheat codes, file dumps, symbol maps) |
| observed | Players report seeing it in play |
| rumour | Told without proof |
| official | The developer or publisher said it |

Sources:

- TCRF pages read through the Wayback Machine: [Patapon](https://tcrf.net/Patapon) (snapshot 2026-10-02), [Patapon 2](https://tcrf.net/Patapon_2) (2026-09-26), [Patapon 3](https://tcrf.net/Patapon_3) (2025-09-28), [Patapon/Items](https://tcrf.net/Patapon/Items) (2025-01-30).
- Patapedia (patapon.fandom.com) pages [Debug Mode](https://patapon.fandom.com/wiki/Debug_Mode), [Patapon Debug](https://patapon.fandom.com/wiki/Patapon_Debug), "Masks and Eggs" and [Glitches and Easter Eggs](https://patapon.fandom.com/wiki/Glitches_and_Easter_Eggs), read 2026-11-17.
- efonte/patapon-re (MIT): CWCheats and file lists.

## Patapon 1

| Topic | Known | Status | Source |
|---|---|---|---|
| Release | JP 2007-12-20, EU 2008-02-22, US 2008-02-26, AU 2008-02-28; Pyramid and SCE Japan Studio | official | [TCRF Patapon](https://tcrf.net/Patapon) |
| Unused music | `butaihensei.vag` (部隊編成, "unit organization") was meant to play when entering the barracks from the world map | data | TCRF Patapon |
| Unused samples | Sound banks hold unused chanting and laughter in Gyorochi's theme, singing in Bikkurakotta's theme, more grouped with all themes | data | TCRF Patapon |
| Unused Meden line | A line meant for the rescue mission never plays; TCRF does not know why | data | TCRF Patapon |
| Unused Patapon voices | Lines for Ramuja the Woodcutter, Geito and Capeta; a minigame revive sound; class callouts ("Patapon!", "Yaripon!") when picked for a mission; several in-mission reactions (item pickup, wind, deaths, charge attacks), one possibly used | data | TCRF Patapon |
| Unused Zigoton sounds | A set of Zigoton voice files whose use nobody knows | data | TCRF Patapon |
| Textures inside textures | TCRF's to-do says many more unused textures hide inside other textures (one sheet, several sprites, part never drawn) | data | TCRF Patapon |
| Retry option | The "Mission Completed" and "Mission Failed" texture sheets also hold a "retry" option; the game never offers a retry | data | TCRF Patapon |
| Patapon house | `loadinggroup\basesdata\camppartsmodel\cln020` holds a house sprite sheet and model from when Patapolis was a village | data | TCRF Patapon |
| Mining minigame | `cln325` holds the sprite sheet and model of a mining minigame; TCRF says the minigame was removed from the executable | data | TCRF Patapon |
| Early Meden | `camppartstex` keeps Meden's old staff and a hat plume | data | TCRF Patapon |
| Citizens sheet | Half of the Patapolis citizen sheet is never drawn, including a miner and a Patapon with a moustache | data | TCRF Patapon |
| Unused items | Leaf (tier 1 wood meant, counted as a tier 5 stone, a tier that only Patapon 2 introduces, with its own Mater message); 11 unused spears, the late Tatepon's sword and late Yumipon's bow, shields marked 仮 ("temporary"), 14 helmets named 亜種ヘルム / めがポンヘルム / でかポンヘルム with "（※翻訳不要）" ("no translation needed") | data | [TCRF Patapon/Items](https://tcrf.net/Patapon/Items) |
| Regional differences | JP has a tutorial video before the title, removed abroad; EU title adds a LANGUAGE option; JP and US backgrounds differ in text outline and copyright year | observed | TCRF Patapon |
| Debug mode | Present in every Patapon 1 version, demos included; a cheat patches one call (US address 0x08853148) to a stub that sets it, then Square in Patapolis or Square + L in a mission opens it | data | efonte/patapon-re CWCheats "Universal Debug Mode Unlocker [P1]" (by Madwig) |
| Debug menu items | English and Japanese variants: SOUND GAME TRENT / BEAN / BLACK SMITH / COOK / ROCK (minigames), MIRACLE 1 to 4, SONG PATA PATA / PON PON / PON PATA / PON CHAKA, CHARIN +/- 10000, ALL ITEM, ALL UNIT, GOTO MISSION, GOTO ENDING, SET MISSION FLAG, GOTO TITLE; Patapedia says it comes from developer builds | data | [Patapedia "Patapon Debug"](https://patapon.fandom.com/wiki/Patapon_Debug) |
| Script engine | Game logic runs in "PAC" bytecode files with their own instruction set, plus Lua (39 named Lua functions in the symbol map) | data | efonte/patapon-re (PAC dumps, `ppsspp_p1_*_lua*.sym`), Nemoumbra/PacDecompiler |
| Executable | US `BOOT.BIN` is a plain `ET_EXEC`; a static recompiler finds about 9,700 to 14,104 functions in it | data | wizardengineer/psprecomp README |

## Patapon 2

| Topic | Known | Status | Source |
|---|---|---|---|
| Release | JP 2008-11-27 (Don Chaka), EU 2009-03-06, AU 2009-03-13, US 2009-05-05 | official | [TCRF Patapon 2](https://tcrf.net/Patapon_2) |
| Debug menu code | In Patapolis, Up Up Down Down Left Right Left Right L R plays a sound; Square opens the menu in Patapolis, Square + L in a mission | observed | TCRF Patapon 2 (citing Patapedia), [Patapedia "Debug Mode"](https://patapon.fandom.com/wiki/Debug_Mode) |
| Only in Europe | The code works only on the European release | observed | TCRF Patapon 2, Patapedia |
| One byte | A cheat writes 0x10 instead of 0x50 at 0x0053AA13 (EU) to unlock it | data | efonte/patapon-re CWCheats "Debug Mode Unlocker [P2] [EUR]" |
| Patapolis menu | MISSION (any mission or boss, mission flags), ADD (items, units, miracles, ka-ching), SAMPLE (minigames, tips, rename), SET SIMPLE DEBUG (adds ENABLE BOSS DEBUG), DEBUG MENU LOCK | observed | TCRF Patapon 2 |
| Mission menu | FORCE END, CHANGE WEATHER A (SHINY, RAINY, STORMY 0 to 2, STORM), CHANGE WEATHER B (FOG or SAND 0 to 3, CATACLYSMIC = all at once), START MIRACLE, ENABLE ALL SOUND COMMAND | observed | TCRF Patapon 2 |
| Mission names | In the debug list, missions show as asterisks and punctuation inside 『』; unvisited map places are named `UK___NO_DATA` | observed | Patapedia "Debug Mode" |
| Six unused eggs | Six extra Patagate eggs exist with no enemies, each giving a random, invisible item; reachable only through the debug menu. TCRF asks for them to be described | observed | [Patapedia "Glitches and Easter Eggs"](https://patapon.fandom.com/wiki/Glitches_and_Easter_Eggs), TCRF Patapon 2 to-do |
| SP_NO DATA | Ton Kampon's minigame in Spanish with a level 5 ore says "SP_NO DATA": a missing Spanish string | observed | Patapedia "Glitches and Easter Eggs" |
| Tochira Beach symbols | The PonPata song at the very start of Tochira Beach shows symbols floating in the air, unexplained | observed | Patapedia "Glitches and Easter Eggs" |
| Other glitches | Kon Kinpon floats beside Rumble Thump after many mistakes; Manboth attacks while frozen or retreats instead of Freeze Roar; Don Chaka in three beats; Gong floats when his tower falls; Majidonga breathes fire with a closed mouth; rarely passing Ormen Karmen | observed | Patapedia "Glitches and Easter Eggs" |
| Scripts | PAC bytecode and Lua (72 to 73 named Lua functions), BND bundles, param files | data | efonte/patapon-re, idrgn/PBundle, idrgn/PPEditor |

## Patapon 3

| Topic | Known | Status | Source |
|---|---|---|---|
| Internal name | Some files call it Labo3; Labo and Labo2 also appear, since Patapon 1 and 2 content is inside | data | [TCRF Patapon 3](https://tcrf.net/Patapon_3) |
| Debug menu | A large, mostly working debug menu (commands can autoplay) reachable only by a cheat; no known retail way to open it | data | TCRF Patapon 3, Patapedia "Debug Mode" |
| Unused console logs | A flag (EU 0x0057C358) turns on console logging left in the game | data | efonte/patapon-re CWCheats "Enable Logs [P3] [EUR]" |
| Security hash check | A cheat disables a "security hash check" (EU) | data | efonte/patapon-re CWCheats |
| Encrypted data | Data files such as `DATAMS.BND` are Camellia-encrypted | data | efonte/patapon-re Tools/patapon3-enc |
| Unused cutscenes | IDs 288 to 320 can be played through mission data: a hopping Uberhero and Ragewolf scene that never ends (softlock), "Uberhero's Dream" (ID 292, the hero tortured by the archfiends, probably cut for the age rating), placeholder scenes in the Field of Angry Giants and the Dark Hero hideout | data | TCRF Patapon 3 |
| Unused menus | A Set Skills menu with slots that shows stat changes | data | TCRF Patapon 3 |
| Unused missions | Training missions (status effects, charge attack/defend, summoning, cumulative), two "FOR ADJUSTMENT", DLC missions (Garuru, Cosmo Serpents, Hell Gate Vs, DLC Mission 0020) | data | TCRF Patapon 3 |
| Unused music | Alternate title theme, `test_level3_01_edit`, `ptpat_summon_`, VS draw, dungeon clear, Patapon 2 intro, Patapon 1 theme, early god themes | data | TCRF Patapon 3 |
| Unused classes | DUMMY, Hatapon, Dekapon, Megapon, Mahopon, Chakapon: selecting one makes the unit invisible (no equipment or look data); deleted Toripon and Uberhero forms | data | TCRF Patapon 3 |
| Moegami sutra | An unused sutra: in a quest it shows blank, plays the Yarigami theme and whitens the sutra icons | data | TCRF Patapon 3 (citing RaonDarkLord) |
| Developer names | Naming the Uberhero after certain developers gives special hairstyles | data | TCRF Patapon 3 |
| Leftovers | Every item of Patapon 1 and 2 is still present, mostly unused | data | TCRF Patapon 3 |
| Code overlays | Every Patapon 3 code overlay puts constructors after its data | data | Pataport README |

[Back to the README](../README.md)
