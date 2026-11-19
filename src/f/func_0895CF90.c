#include "common.h"

#pragma divbyzerocheck on

typedef struct {
    u8 pad_00[0x50];
    s32 *unk_50;
    u32 unk_54;
    u8 pad_58[4];
    s32 unk_5C;
    u8 pad_60[4];
    volatile u32 unk_64;
} S;

s32 func_0895CF90(S *arg0) {
    s32 temp = arg0->unk_50[arg0->unk_64];
    arg0->unk_5C--;
    arg0->unk_64 = (arg0->unk_64 + 1) % arg0->unk_54;
    return temp;
}
