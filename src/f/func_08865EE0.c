#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[0x4];
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    s32 unk_70;
    s32 unk_74;
    u8 pad_78[0x8];
    u8 *unk_80;
} A_08865EE0;

extern u8 D_08A44B70[];
extern s32 D_08AD1DC4[];

A_08865EE0 *func_08865EE0(A_08865EE0 *arg0) {
    arg0->unk_80 = D_08A44B70;
    arg0->unk_00 = 1.0f;
    arg0->unk_04 = 0.0f;
    arg0->unk_08 = 0.0f;
    arg0->unk_0C = 0.0f;
    arg0->unk_10 = 0.0f;
    arg0->unk_14 = 1.0f;
    arg0->unk_18 = 0.0f;
    arg0->unk_1C = 0.0f;
    arg0->unk_20 = 0.0f;
    arg0->unk_24 = 0.0f;
    arg0->unk_28 = 1.0f;
    arg0->unk_2C = 0.0f;
    arg0->unk_30 = 0.0f;
    arg0->unk_34 = 0.0f;
    arg0->unk_38 = 0.0f;
    arg0->unk_3C = 1.0f;
    arg0->unk_40 = 0;
    arg0->unk_44 = -1;
    arg0->unk_4C = 0;
    arg0->unk_50 = 0;
    arg0->unk_54 = 0;
    arg0->unk_58 = 0;
    arg0->unk_5C = 0;
    arg0->unk_60 = D_08AD1DC4[0];
    arg0->unk_64 = 0;
    arg0->unk_68 = 0;
    arg0->unk_6C = 0;
    arg0->unk_70 = 0;
    arg0->unk_74 = 0;
    return arg0;
}
