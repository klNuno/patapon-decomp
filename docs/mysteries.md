# Open questions

Questions about how the three games work that the community has not settled and that the code can answer. A checked box is answered in the findings once the code is read. What the community already believes, with sources: [community-knowledge.md](community-knowledge.md).

## Patapon 1

- [ ] 1. The debug menu exists in every version, demos included, but nothing reaches it: is there a dead check (a button sequence, a build flag, a save flag) that once opened it, and does the code still hold both the English and Japanese menus?
- [ ] 2. Is the mining minigame really gone from the executable, as TCRF says, or does a code path still load `cln325`?
- [ ] 3. The "retry" texture beside "Mission Completed" and "Mission Failed": does any code index that part of the sheet, or was retry cut before code existed?
- [ ] 4. Why does Meden's rescue-mission line never play: no trigger, a wrong sound id, or a removed event?
- [ ] 5. What were the unused Zigoton sounds for? A sound id table in the code may still name the events that would play them.
- [ ] 6. The class callouts ("Patapon!", "Yaripon!") on mission pick: is there a disabled call at the squad selection?
- [ ] 7. Which textures hide inside other textures: which parts of each sheet does the code never reference in its sprite tables?
- [ ] 8. Leaf counts as a tier 5 stone, a tier the game has no use for: a wrong table entry, or a leftover of a five-tier design?
- [ ] 9. The Japanese tutorial video before the title: removed by a region check in one shared executable, or a different executable per region?

## Patapon 2

- [ ] 10. Why does the debug code (Up Up Down Down Left Right Left Right L R) work only in the European release? One byte (0x50 vs 0x10) sets it in EU memory: what writes that byte, and does the code differ per region or only the default?
- [ ] 11. The six unused Patagate eggs: which ids, which missions do they point to, why no enemies, and which "random, invisible" item do they give?
- [ ] 12. What are the floating symbols at the start of Tochira Beach under the PonPata song?
- [ ] 13. "SP_NO DATA" in Ton Kampon's minigame: which string ids are missing in Spanish, and are other languages missing others?
- [ ] 14. Manboth attacking while frozen and retreating instead of Freeze Roar: a state machine order bug?
- [ ] 15. How do the debug mission names in 『』 come out as asterisks: a font or encoding gap, or names never written?

## Patapon 3

- [ ] 16. Retail has no known way to open the debug menu: is there a dead input check, as in Patapon 2?
- [ ] 17. What do the unused console logs print once enabled, and where does the flag that gates them come from?
- [ ] 18. What does the "security hash check" protect (saves, DLC, data files), and what happens when it fails?
- [ ] 19. Where are the Camellia key and the decryption of `DATAMS.BND`, and is the key the same in every region?
- [ ] 20. Why does the hopping cutscene never end: no end event, or a wait on a flag nothing sets?
- [ ] 21. Which developer names give special hairstyles: the full list from the code, and is the comparison exact or by prefix?
- [ ] 22. The invisible unused classes (DUMMY, Hatapon, Dekapon, Megapon, Mahopon, Chakapon): imported tables from Patapon 1 and 2 only, or code paths left for them?
- [ ] 23. How much of Patapon 1 and 2 code, not only data ("Labo", "Labo2"), still ships inside Patapon 3?
