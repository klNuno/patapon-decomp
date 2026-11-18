#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} Unk1;

typedef struct {
    u8 pad_00[0x90];
    Unk1 unk_90;
    u8 pad_A0[0x48];
    f32 unk_E8;
    f32 unk_EC;
    u8 pad_F0[0xA0];
    Unk1 unk_190;
    u8 pad_1A0[0x48];
    f32 unk_1E8;
    f32 unk_1EC;
    u8 pad_1F0[0xF8];
    f32 unk_2E8;
    f32 unk_2EC;
    u8 pad_2F0[0x20];
    f32 unk_310;
} C_08879FD8;

extern volatile f32 D_089DDA90[];
extern volatile f32 D_089DDA98[];

void func_0887A4BC(C_08879FD8 *, s32);
f32 func_0887A67C(f32, s32, s32);

void func_0887A21C(C_08879FD8 *arg0, s32 arg1) {
    f32 temp;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;

    temp = arg0->unk_310 + func_0887A67C(1.0f, arg1, 0x12C0);
    arg0->unk_310 = temp;
    if (20.0f <= temp) {
        func_0887A4BC(arg0, 1);
    } else {
        temp2 = temp / 20.0f;
        temp3 = D_089DDA90[0];
        temp4 = D_089DDA90[1];
        temp5 = D_089DDA98[0];
        arg0->unk_90.unk_00 = temp3;
        arg0->unk_90.unk_04 = temp4;
        arg0->unk_90.unk_08 = temp5;
        temp = 0.0f;
        temp6 = temp + (temp2 * (temp6 = 0.5f));
        arg0->unk_90.unk_0C = temp6;
        arg0->unk_E8 = 1.0f;
        arg0->unk_EC = 1.0f;
        temp6 = temp2;
        temp6 *= 2.5f;
        temp = 1.0f;
        temp += temp6;
        arg0->unk_1E8 = temp;
        arg0->unk_1EC = temp;
        arg0->unk_190.unk_00 = temp3;
        arg0->unk_190.unk_04 = temp4;
        arg0->unk_190.unk_08 = temp5;
        arg0->unk_190.unk_0C = 1.0f - temp2;
        arg0->unk_2E8 = 1.0f;
        arg0->unk_2EC = 1.0f;
    }
}
