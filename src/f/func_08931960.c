#include "common.h"

typedef struct {
    u8 pad_00[0x5C];
    s32 unk_5C;
    u8 pad_60[0xDC];
    s32 unk_13C;
} S_08931960_C4;

typedef struct {
    u8 pad_00[0x8C];
    s32 unk_8C;
    u8 pad_90[0x4];
    s32 unk_94;
    u8 pad_98[0x2C];
    S_08931960_C4 *unk_C4;
} S_08931960;

extern s32 D_089E7428[];

void func_08931960(S_08931960 *arg0) {
    S_08931960_C4 *p = arg0->unk_C4;
    s32 v;

    if (p->unk_5C == D_089E7428[0]) {
        v = p->unk_13C;
        if (v >= 999) {
            arg0->unk_94 = 9;
            return;
        }
        switch (arg0->unk_8C) {
        case 2:
        case 3:
        case 4:
            arg0->unk_94 = v % 10;
            break;
        case 0:
        case 1:
        case 5:
            arg0->unk_94 = (v % 100) / 10;
            break;
        }
    }
}
