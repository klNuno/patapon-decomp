#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    s32 unk_00;
    V unk_04;
    u8 pad_10[4];
} E;

typedef struct {
    u8 pad_00[8];
    E *unk_08;
    s32 unk_0C;
} T;

class B {};

typedef union {
    s32 unk_00;
    f32 unk_04[2];
    struct {
        u8 pad_00[4];
        u8 unk_04;
    } unk_08;
} P;

extern "C" void func_08852680(V *arg0, T *arg1, s32 arg2) {
    volatile struct {
        u8 unk_00;
        u8 pad_01[3];
    } temp0;
    const B *temp8;
    struct {
        B unk_00;
        u8 pad_01[7];
    } temp1;
    volatile P temp2;
    P temp3;
    E *temp4;
    E *temp5;
    s32 temp6;
    s32 temp7;

    temp4 = arg1->unk_08;
    temp2.unk_00 = arg2;
    temp8 = &temp1.unk_00;
    u8 temp9 = *(const u8 *&)temp8;
    temp7 = arg1->unk_0C;
    temp0.unk_00 = temp9;
    temp5 = (E *)((u8 *)temp4 + (u32)temp7 * 0x14U);
    temp2.unk_08.unk_04 = temp0.unk_00;
    temp3 = *(P *)&temp2;
    temp6 = *(volatile s32 *)&temp3.unk_00;
    while (temp4 != temp5 && temp6 != temp4->unk_00) {
        ++temp4;
    }
    f32 temp10;
    f32 temp11;
    f32 temp12;

    temp10 = *(volatile f32 *)&temp4->unk_04.unk_00;
    temp11 = *(volatile f32 *)&temp4->unk_04.unk_04;
    temp12 = *(volatile f32 *)&temp4->unk_04.unk_08;

    arg0->unk_00 = temp10;
    arg0->unk_04 = temp11;
    arg0->unk_08 = temp12;
}
