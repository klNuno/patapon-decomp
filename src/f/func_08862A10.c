#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
} T08862A10;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} U08862A10;

s32 sceUmdGetDriveStat(void);
void func_08862760(T08862A10 *, U08862A10 *, s32);

s32 func_08862A10(T08862A10 *arg0, U08862A10 *arg1) {
    s32 temp;

    if (arg0->unk_50 != 1) {
        return 1;
    }
    temp = sceUmdGetDriveStat();
    if (temp & 1) {
        arg1->unk_08 = 8;
        return 0;
    }
    if (temp & 4) {
        arg1->unk_08 = 9;
        return 0;
    }
    if (temp & 8) {
        arg1->unk_08 = 7;
        return 0;
    }
    if (temp & 0x20) {
        if ((u32)(arg1->unk_08 - 7) < 3U) {
            func_08862760(arg0, arg1, 1);
        }
    }
    return 1;
}
