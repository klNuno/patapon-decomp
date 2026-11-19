#include "common.h"

typedef struct {
    u8 pad_00[0x5C];
    s32 unk_5C;
    u8 pad_60[0xDC];
    s32 unk_13C;
} T;

typedef struct {
    u8 pad_00[0x8C];
    s32 unk_8C;
    u8 pad_90[4];
    s32 unk_94;
    u8 pad_98[0x2C];
    T *unk_C4;
} S;

extern s32 D_089E7428[];

void func_08931A04(S *arg0) {
    T *temp = arg0->unk_C4;
    if (temp->unk_5C == D_089E7428[0]) {
        s32 temp2 = temp->unk_13C;
        if (temp2 >= 999) {
            arg0->unk_94 = 9;
        } else {
            switch (arg0->unk_8C) {
            case 0:
            case 1:
            case 2:
                arg0->unk_94 = temp2 % 10;
                break;
            }
        }
    }
}
