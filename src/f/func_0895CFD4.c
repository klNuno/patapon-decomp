#include "common.h"

#pragma divbyzerocheck on

typedef struct {
    u8 pad_00[0x50];
    s32 *unk_50;
    u32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    u32 unk_60;
    u8 pad_64[4];
    s32 unk_68;
} Unk_0895CFD4;

void func_0895CFD4(Unk_0895CFD4 *arg0, s32 arg1)
{
    if (arg1 == -1) {
        arg1 = arg0->unk_58;
        arg1 = (s32)((u8 *)arg0->unk_68 + arg1);
    }
    arg0->unk_68 = arg1;
    arg0->unk_50[arg0->unk_60] = arg1;
    ++arg0->unk_5C;
    arg0->unk_60 = (arg0->unk_60 + 1) % arg0->unk_54;
}
