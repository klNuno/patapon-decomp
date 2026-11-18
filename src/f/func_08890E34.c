#include "common.h"

typedef struct Unk_08890E34 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 unk_0D;
    u8 unk_0E;
    u8 unk_0F;
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0x27C - 0x18];
    char unk_27C[0x20];
    s32 unk_29C;
    s16 unk_2A0;
    s16 unk_2A2;
    s16 unk_2A4;
    s16 unk_2A6;
    s16 unk_2A8;
    s16 unk_2AA;
    s32 unk_2AC;
    s16 unk_2B0;
    u8 pad_2B2[0x2CC - 0x2B2];
    s32 unk_2CC;
    s32 unk_2D0;
    s32 unk_2D4;
    s32 unk_2D8;
    char unk_2DC[0x20];
    s32 unk_2FC;
} Unk_08890E34;

void func_08822B3C(char *, char *);
s32 func_0888AFAC(char *);
extern char D_089DD3DC[];
extern char D_089DD3E0[];

void func_08890E34(Unk_08890E34 *arg0) {
    arg0->unk_00 = -1;
    arg0->unk_04 = 3;
    arg0->unk_08 = 1;
    arg0->unk_0C = 0;
    arg0->unk_0D = 0;
    arg0->unk_0F = 1;
    arg0->unk_14 = 0;
    arg0->unk_0E = 0;
    func_08822B3C(arg0->unk_27C, D_089DD3E0);
    arg0->unk_29C = -1;
    arg0->unk_2A0 = 3;
    arg0->unk_2A2 = 0;
    arg0->unk_2A4 = 0;
    arg0->unk_2A6 = 1;
    arg0->unk_2A8 = 0;
    arg0->unk_2AA = 1;
    arg0->unk_2AC = 0x19;
    arg0->unk_2CC = 0;
    arg0->unk_2D0 = 0;
    arg0->unk_2D4 = 0;
    arg0->unk_2D8 = 0;
    arg0->unk_2B0 = 0;
    arg0->unk_2FC = func_0888AFAC(D_089DD3DC);
    func_08822B3C(arg0->unk_2DC, D_089DD3DC);
    arg0->unk_10 = -1;
}
