#include "common.h"

extern volatile f32 D_089DDA90[];
extern volatile f32 D_089DDA98[];

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} T;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8C];
    T unk_90;
    f32 unk_9C;
    u8 pad_A0[0xC];
    s32 unk_AC;
    u8 pad_B0[0x38];
    f32 unk_E8;
    f32 unk_EC;
    u8 pad_F0[0xBC];
    s32 unk_1AC;
    u8 pad_1B0[0x160];
    f32 unk_310;
} S;

typedef struct {
    u8 pad_00[0x90];
    T unk_90;
    f32 unk_9C;
    u8 pad_A0[0x58];
    s32 unk_F8;
    u8 pad_FC[0x94];
    T unk_190;
    f32 unk_19C;
    u8 pad_1A0[0x58];
    s32 unk_1F8;
    u8 pad_1FC[0xEC];
    f32 unk_2E8;
    f32 unk_2EC;
    u8 pad_2F0[0x20];
    f32 unk_310;
} U;

void func_0887A4BC(S *arg0, s32 arg1);
f32 func_0887A67C(f32, s32, s32);

void func_0887A308(U *arg0, s32 arg1) {
    f32 temp0;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;

    temp0 = (arg0->unk_310 += func_0887A67C(1.0f, arg1, 4800));
    if (15.0f <= temp0) {
        func_0887A4BC((S *)arg0, 0);
        arg0->unk_F8 = 1;
        arg0->unk_1F8 = 1;
    } else {
        temp0 /= 15.0f;
        temp6 = 1.5f;
        temp1 = 1.0f + temp0 * temp6;
        temp7 = -0.5f;
        temp2 = 0.5f + temp0 * temp7;
        temp3 = D_089DDA90[0];
        temp4 = D_089DDA90[1];
        temp5 = D_089DDA98[0];
        arg0->unk_90.unk_00 = temp3;
        arg0->unk_90.unk_04 = temp4;
        arg0->unk_90.unk_08 = temp5;
        arg0->unk_9C = temp2;
        arg0->unk_F8 = 2;
        arg0->unk_190.unk_00 = temp3;
        arg0->unk_190.unk_04 = temp4;
        arg0->unk_190.unk_08 = temp5;
        arg0->unk_19C = temp2;
        arg0->unk_1F8 = 2;
        arg0->unk_2E8 = temp1;
        arg0->unk_2EC = temp1;
    }
}
