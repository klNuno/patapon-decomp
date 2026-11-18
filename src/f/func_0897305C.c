#include "common.h"

typedef struct S_089734B8 S_089734B8;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x10];
    u32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[4];
    s32 unk_30;
    u8 pad_34[4];
    f32 unk_38;
    s32 unk_3C;
    u8 pad_40[4];
    s32 unk_44;
    s32 unk_48;
} T;

S_089734B8 *func_08852FFC(s32);
s32 func_08853004(s32);
extern s32 func_088586E8(void);
u32 func_08981F88(s32);
u32 func_089B5464(s32);
extern f32 D_08ADAFBC[];
extern s32 D_08ADAFC0[];
extern s32 D_08ADAFC4[];

void func_0897305C(T *arg0) {
    s32 temp;
    f32 temp2;

    func_08852FFC(arg0->unk_08);
    func_08853004(arg0->unk_08);
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_30 = 0;
    if (arg0->unk_3C == 0) {
        arg0->unk_48 = func_089B5464(func_088586E8()) & 1U;
        arg0->unk_44 = 0;
    }
    switch (arg0->unk_48) {
    case 0:
        if (func_08981F88(arg0->unk_0C) < 5U) {
            arg0->unk_24 = (arg0->unk_20 & 1U) != 0;
        } else {
            arg0->unk_24 = (arg0->unk_20 & 1U) ? 3 : 2;
        }
        break;
    case 1:
        if (func_08981F88(arg0->unk_0C) < 5U) {
            arg0->unk_24 = (u8)!((arg0->unk_20 & 1U) != 0);
        } else {
            arg0->unk_24 = (arg0->unk_20 & 1U) ? 2 : 3;
        }
        break;
    }
    temp = D_08ADAFC0[0];
    if (temp > 0) {
        if (temp == 1) {
            arg0->unk_38 = -D_08ADAFBC[0];
        } else {
            arg0->unk_38 = D_08ADAFBC[0];
        }
    } else {
        f32 temp3 = (f32)(func_089B5464(func_088586E8()) % 300U);
        f32 temp4 = 0.01f;
        temp2 = temp4 * (temp3 - 150.0f);
        D_08ADAFBC[0] = temp2;
        arg0->unk_38 = temp2;
    }
    if (D_08ADAFC4[0] != 0) {
        arg0->unk_30 = 0;
        arg0->unk_24 = 0;
    }
    arg0->unk_24 += 0x14;
}

