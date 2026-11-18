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

void func_0887A4BC(S *arg0, s32 arg1)
{
    f32 temp2;
    f32 temp1;
    f32 temp0;
    arg0->unk_00 = arg1;
    switch (arg1) {
    case 0:
        arg0->unk_AC = -1;
        arg0->unk_1AC = -1;
        arg0->unk_310 = 0.0f;
        break;
    case 1:
        arg0->unk_E8 = 1.0f;
        arg0->unk_EC = 1.0f;
        temp2 = D_089DDA90[1];
        temp1 = D_089DDA98[0];
        temp0 = D_089DDA90[0];
        arg0->unk_90.unk_00 = temp0;
        arg0->unk_90.unk_04 = temp2;
        arg0->unk_90.unk_08 = temp1;
        arg0->unk_9C = 0.5f;
        arg0->unk_E8 = 1.0f;
        arg0->unk_EC = 1.0f;
        arg0->unk_1AC = -1;
        arg0->unk_310 = 1.0f;
        break;
    case 2:
    case 3:
        arg0->unk_310 = 0.0f;
        break;
    case 4:
    case 5:
        temp2 = D_089DDA90[1];
        temp1 = D_089DDA98[0];
        temp0 = D_089DDA90[0];
        arg0->unk_90.unk_00 = temp0;
        arg0->unk_90.unk_04 = temp2;
        arg0->unk_90.unk_08 = temp1;
        arg0->unk_9C = 0.5f;
        arg0->unk_E8 = 1.0f;
        arg0->unk_EC = 1.0f;
        arg0->unk_1AC = -1;
        arg0->unk_310 = 0.0f;
        break;
    }
}
