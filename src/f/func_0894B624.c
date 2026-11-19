#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1C;
    u8 pad_20[4];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
} T;

extern s32 D_08AD99C4[];

void func_0894B624(T *arg0)
{
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_14 = 0;
    arg0->unk_28 = -1;
    arg0->unk_24 = -1;
    D_08AD99C4[0] = 0;
    arg0->unk_3C = 0;
    arg0->unk_1C = 0;
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_10 = 0;
}
