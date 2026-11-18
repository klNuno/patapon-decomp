#include "common.h"

typedef struct {
    u8 pad_00[0x1060];
    s32 unk_1060, unk_1064;
    u8 unk_1068, unk_1069, unk_106A;
    u8 pad_106B;
    s32 unk_106C;
    u8 pad_1070[0x2610 - 0x1070];
    u32 unk_2610;
    u8 pad_2614[0x2A1C - 0x2614];
    u32 unk_2A1C;
    u8 pad_2A20[0x3284 - 0x2A20];
    f32 unk_3284;
} A_089B98CC;

extern f32 D_08A08D00[];
extern f32 D_08A08D04[];

s32 func_088586E8(void);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887ED98(s32, s32);
s32 func_0887EDA8(s32, s32);
void func_089261F8(void *, s32);
s32 func_08998080(s32, s32);
s32 func_0899A900(s32);
s32 func_0899A92C(s32);
s32 func_089B53D8(s32);
void func_089B989C(char *arg0);
void func_089B98CC(void *, s32);
void func_089BA300(A_089B98CC *, u32);
void func_089BA5A4(A_089B98CC *);
void func_089BA824(A_089B98CC *);

void func_089B9A4C(A_089B98CC *arg0, s32 arg1) {
    f32 temp, temp2;
    const f32 *temp3, *temp4;

    if (arg0->unk_1068 == 1) {
        if (arg0->unk_106A != 0) {
            func_089B989C((char *)arg0);
            if (func_0899A900(func_08998080(arg0->unk_1064, arg0->unk_106C)) != 0) {
                func_089B98CC(arg0, arg0->unk_106C);
            }
            return;
        }
        if (func_0887ED98(arg0->unk_1060, 0x40) != 0) {
            func_089BA300(arg0, arg0->unk_2610 + 1);
            func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
        }
        if (func_0887ED98(arg0->unk_1060, 0x10) != 0) {
            func_089BA300(arg0, arg0->unk_2610 - 1);
            func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
        }
        if (arg0->unk_2A1C != 0) {
            if (func_0887EDA8(arg0->unk_1060, 0x4000) != 0 &&
                (u8)func_0899A92C(func_08998080(arg0->unk_1064, arg0->unk_106C)) == 0) {
                func_089BA824(arg0);
                func_08878864(func_089B53D8(func_088586E8()), 0x210000, 2, 1.0f, 0.0f, 0.0f);
            }
        }
        if (func_0887EDA8(arg0->unk_1060, 0x2000) != 0) {
            arg0->unk_106A = 1;
            return;
        }
        temp = 0.2f + arg0->unk_3284;
        if (temp < D_08A08D00[0]) {
            temp3 = &temp;
        } else {
            temp3 = D_08A08D00;
        }
        arg0->unk_3284 = *temp3;
        func_089261F8(arg0, arg1);
    } else {
        temp2 = arg0->unk_3284 - 0.2f;
        if (D_08A08D04[0] < temp2) {
            temp4 = &temp2;
        } else {
            temp4 = D_08A08D04;
        }
        arg0->unk_3284 = *temp4;
    }
    if (arg0->unk_1068 != 0 || arg0->unk_1069 != 0) {
        func_089BA5A4(arg0);
    }
}
