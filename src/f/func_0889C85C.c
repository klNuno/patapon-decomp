#include "common.h"

typedef struct {
    s32 unk_00;
    u32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
    s32 unk_10;
    u8 unk_14;
    u8 pad_15[3];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} Unk;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} A;

extern u8 *D_08AD1F14[];
A *func_08877444(u8 *);

void func_0889C85C(Unk *arg0)
{
    arg0->unk_00 = -1;
    arg0->unk_04 = 0x3F000000;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = -1;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_08;
}
