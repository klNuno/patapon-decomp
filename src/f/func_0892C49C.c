#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T0;

typedef struct {
    u8 pad_00[0x58];
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    u8 pad_64[0x54];
    s32 unk_B8;
} T1;

typedef struct {
    u8 pad_00[0x170];
    u8 unk_170[0x130];
    s32 unk_2A0;
    u8 pad_2A4[0x54];
    s32 unk_2F8;
    u8 pad_2FC[0xC0];
    u8 unk_3BC;
    u8 pad_3BD[7];
    s32 unk_3C4;
    u8 pad_3C8[0x18];
    f32 unk_3E0;
    u8 pad_3E4[0x28];
    s32 unk_40C;
    u8 pad_410[0x1B8];
    s32 unk_5C8;
    u8 pad_5CC[3];
    u8 unk_5CF;
} T2;

void func_0885429C(T0 *, T0 *);
s32 func_0892ABE0(s32);
extern s32 func_0892AE88(s32);
void func_0892C670(T2 *, s32);
void func_0892C740(T2 *, s32, s32);
void func_089333C4(void *, T0 *);
f32 *func_08933480(void *);

void func_0892C49C(T2 *arg0, u8 arg1, T0 *arg2) {
    T0 temp0;
    T0 temp1;
    T0 temp2;
    T0 temp3;
    f32 *temp4;
    f32 temp5;
    f32 temp6;

    if (arg0->unk_5CF == 1) {
        return;
    }
    if (arg1 == 1) {
        if (((T1 *)func_0892AE88(arg0->unk_2F8))->unk_60 == 1) {
            func_0892C670(arg0, ((T1 *)func_0892AE88(arg0->unk_2F8))->unk_B8);
        }
        temp4 = func_08933480(arg0->unk_170);
        temp5 = temp4[1] - arg2->unk_04;
        temp6 = temp4[0] - arg2->unk_00;
        temp1.unk_04 = temp5;
        temp1.unk_00 = temp6;
        func_0885429C(&temp0, &temp1);
        func_089333C4(arg0->unk_170, &temp0);
        ++arg0->unk_5C8;
    } else {
        func_0892C670(arg0, ((T1 *)func_0892AE88(arg0->unk_2F8))->unk_B8);
        temp4 = func_08933480(arg0->unk_170);
        temp5 = temp4[1] - arg2->unk_04;
        temp6 = temp4[0] - arg2->unk_00;
        temp3.unk_04 = temp5;
        temp3.unk_00 = temp6;
        func_0885429C(&temp2, &temp3);
        func_089333C4(arg0->unk_170, &temp2);
        ++arg0->unk_5C8;
    }
    if (arg1 == 1) {
        if (arg0->unk_40C != 0 && ((T1 *)func_0892AE88(arg0->unk_2F8))->unk_60 == 1) {
            func_0892C740(arg0, arg0->unk_40C, func_0892ABE0(arg0->unk_2A0));
        }
        if (((T1 *)func_0892AE88(arg0->unk_2F8))->unk_58 == 1) {
            arg0->unk_3E0 = 0.5f;
            arg0->unk_3C4 = 0;
            arg0->unk_3BC = 1;
            arg0->unk_5CF = 1;
        }
    } else {
        if (((T1 *)func_0892AE88(arg0->unk_2F8))->unk_5C == 1) {
            arg0->unk_3E0 = 0.5f;
            arg0->unk_3C4 = 0;
            arg0->unk_3BC = 1;
            arg0->unk_5CF = 1;
        }
    }
}
