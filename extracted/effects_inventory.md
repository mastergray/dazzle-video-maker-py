# Dazzle 5.0 Effect Inventory (from unpacked string table)

Source: strings extracted from PKLITE-unpacked DAZZLE.EXE (752-byte offset, `-d` decrypt).
Compiled with: Borland C++, Copyright 1991 Borland Intl.
Publisher: MicroTronics 1989-92.

## Visual effects (names as stored in binary)

1. corkscrew
2. cycloids
3. formula1
4. littleStars
5. lotsadots
6. triangles
7. sierpinski
8. squirals
9. wandering
10. zigstream
11. butterflies
12. diamonds
13. gumballs
14. yarnball
15. rAndomize
16. Countdown
17. Exclusive-or
18. Gas cloud
19. Juggle palette
20. Linewipe
21. firewOrks
22. Pan/scroll
23. Rectangles
24. Starburst
25. moVingbars

## Named program segments (internal naming — useful landmarks for Ghidra)

- DZLE_Seg, DZL2_Seg — likely main Dazzle code segments
- DZFD_Seg — probably "fade" or file data
- DVDT_Seg — video data / VGA tables
- DOSI_Seg — DOS interface / I/O
- DHUF_Seg — Huffman decoder (likely overlay decompression)
- DLOGO_Seg — splash logo
- DAZPCX_Seg — PCX image decoder

## Named routines identified in strings

- `star_burst` — referenced by error message "Memory exhausted in star_burst routine!"
- `antiviral checking` — self-checksum routine (standard for MicroTronics shareware)
- `genCRC` — CRC generation helper
- `deRead` — decrypted file read helper
- `matherr` / `sigerr` — FP/signal error handlers
- `parser corrupted!` — some kind of config parser

## Overlay

- Overlay exists at file offset 80641, size 78251 bytes (per pkla).
- Likely contains PCX logo + Huffman-compressed secondary data (matches DHUF_Seg / DAZPCX_Seg).
