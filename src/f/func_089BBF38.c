#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    u8 unk_08, unk_09;
    u8 pad_0A[2];
    s32 unk_0C;
    u8 pad_10[8];
    s32 unk_18, unk_1C, unk_20;
    u8 pad_24[0x90C];
    u8 unk_930[0x6D0];
    u8 unk_1000[0x1028];
    f32 unk_2028;
} S;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, f32, f32, s32, f32);
s32 func_0887EDA8(s32, s32);
s32 func_0887EDB8(void *, s32);
void func_088F24B0(void *);
void func_089BCDFC(S *);
void func_089BCF3C(S *);

extern s32 D_08A08F40[];
extern s32 D_08A08F44[];
extern s32 D_08A08F48[];
extern s32 D_08A08F4C[];
extern f32 D_08A08F50[];

void func_089BBF38(S *arg0) {
    s32 temp, temp1, temp2, temp3;
    f32 temp4;
    s32 *temp5;
    f32 *temp6;
    u8 temp7;
    s32 temp8;
    f32 temp9;

    if (arg0->unk_08 == 0) {
        return;
    }
    if (arg0->unk_09 != 0) {
        arg0->unk_08 = 0;
        func_088F24B0(arg0->unk_930);
        func_088F24B0(arg0->unk_1000);
        func_08878864(func_089B53D8(func_088586E8()), 9, 1.0f, 0.0f, 2, 0.0f);
        return;
    }

    temp7 = 0;
    if (func_0887EDB8((void *)arg0->unk_00, 0x10) != 0) {
        temp = arg0->unk_20 - 1;
        if (D_08A08F40[0] < temp) {
            temp5 = &temp;
        } else {
            temp5 = D_08A08F40;
        }
        arg0->unk_20 = *temp5;
        if (arg0->unk_20 < arg0->unk_18) {
            temp1 = arg0->unk_18 - 1;
            if (D_08A08F44[0] < temp1) {
                temp5 = &temp1;
            } else {
                temp5 = D_08A08F44;
            }
            arg0->unk_18 = *temp5;
        }
        temp7 = 1;
    }
    if (func_0887EDB8((void *)arg0->unk_00, 0x40) != 0) {
        temp2 = arg0->unk_20 + 1;
        if (temp2 < D_08A08F48[0]) {
            temp5 = &temp2;
        } else {
            temp5 = D_08A08F48;
        }
        arg0->unk_20 = *temp5;
        if ((u32)(arg0->unk_18 + 3) < (u32)arg0->unk_20) {
            temp3 = arg0->unk_18 + 1;
            if (temp3 < D_08A08F4C[0]) {
                temp5 = &temp3;
            } else {
                temp5 = D_08A08F4C;
            }
            arg0->unk_18 = *temp5;
        }
        temp7 = 1;
    }
    if (func_0887EDB8((void *)arg0->unk_00, 0x80) != 0) {
        if (--arg0->unk_1C < 0) {
            arg0->unk_1C = 3;
        }
        temp7 = 1;
    }
    if (func_0887EDB8((void *)arg0->unk_00, 0x20) != 0) {
        if ((u32)++arg0->unk_1C > 3U) {
            arg0->unk_1C = 0;
        }
        temp7 = 1;
    }
    if (temp7 == 1) {
        temp8 = arg0->unk_1C;
        arg0->unk_0C = temp8 + arg0->unk_20 * 4;
        func_089BCDFC(arg0);
        temp8 = func_089B53D8(func_088586E8());
        func_08878864(temp8, 1, 1.0f, 0.0f, 2, 0.0f);
    }
    if (func_0887EDA8(arg0->unk_00, 0x4000) != 0) {
        func_089BCF3C(arg0);
    }
    if (func_0887EDA8(arg0->unk_00, 0x2000) != 0) {
        arg0->unk_09 = 1;
    }
    temp4 = 0.05f + arg0->unk_2028;
    if (D_08A08F50[0] < temp4) {
        temp6 = D_08A08F50;
    } else {
        temp6 = &temp4;
    }
    temp9 = *temp6;
    arg0->unk_2028 = temp9;
    if (temp9 >= 1.0f) {
        arg0->unk_2028 = 0.0f;
    }
}
