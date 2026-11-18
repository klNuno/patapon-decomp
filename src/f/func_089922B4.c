#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
} S089922B4_0C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x4];
    S089922B4_0C *unk_0C;
    u8 pad_10[0x4];
    s32 unk_14;
    s32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    s32 unk_24;
    s32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    s32 unk_34;
} S089922B4;

void func_089922B4(S089922B4 *arg0) {
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0.0f;
    arg0->unk_20 = 0.0f;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0.0f;
    arg0->unk_30 = 0.0f;
    if (arg0->unk_0C != NULL && arg0->unk_0C->unk_4C == 1) {
        switch (arg0->unk_0C->unk_4C) {
        case 1:
            arg0->unk_14 = 1;
            arg0->unk_1C = 1.0f;
            arg0->unk_34 = 0;
            arg0->unk_20 = 0.0f;
            arg0->unk_18 = 0;
            arg0->unk_24 = -1;
            arg0->unk_28 = -1;
            arg0->unk_2C = 1000.0f;
            arg0->unk_30 = 1000.0f;
            break;
        }
    }
}
