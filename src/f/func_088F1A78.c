#include "common.h"

#pragma divbyzerocheck on

typedef struct {
    u8 pad_00[0x808];
    volatile u32 unk_808;
    u8 pad_80C[0x114];
    u32 unk_920;
    u8 pad_924[0xD0];
    u32 unk_9F4;
} T;

void func_088F1A78(T *arg0, s32 arg1) {
    if (arg1 < 0 || arg0->unk_808 == 0) {
        arg0->unk_9F4 = -1U;
        arg0->unk_920 = -1U;
    } else {
        arg0->unk_9F4 = arg0->unk_920;
        arg0->unk_920 = (u32)arg1 % arg0->unk_808;
    }
}
