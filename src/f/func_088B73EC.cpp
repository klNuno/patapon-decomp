#include "common.h"

extern "C" {

class U {};

typedef struct {
    f32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
} V;

struct N {
    N *unk_00;
    N *unk_04;
    V unk_08;
};

struct T {
    N *unk_00;
    N *unk_04;
    N *unk_08;
    s32 unk_0C;
};

typedef struct {
    s32 unk_00;
} It;

union J {
    N *unk_00;
    f32 unk_04;
};

typedef struct {
    u8 pad_00[0x304];
    T unk_304;
    U *unk_314;
    void (U::*unk_318)();
    u8 unk_324;
    u8 pad_325[3];
    f32 unk_328;
    f32 unk_32C;
} S;

void func_088B69F4(s32 *arg0, s32 *arg1);
void func_088B69EC(s32 *arg0, s32 arg1);
void func_088B6A74(It *, void *, It, It);

void func_088B73EC(S *arg0, s32 arg1, f32 arg4, u8 arg2, u8 arg3) {
    V temp;
    J temp2;
    f32 temp3;
    J temp4;
    struct { It unk_00; u8 pad_04[4]; } temp5;
    It temp6;
    It temp7;
    u8 *temp8;
    s32 temp9;
    N *temp10;
    N *temp11;
    V *temp13;
    N *temp12;
    struct F { f32 unk_00[3]; };
    f32 *temp14;

    if (arg3 == 1) {
        func_088B69F4(&temp6.unk_00, (s32 *)&arg0->unk_304);
        func_088B69EC((s32 *)(u32)&temp7, (s32)&arg0->unk_304);
        func_088B6A74(&temp5.unk_00, &arg0->unk_304, temp6, temp7);
    }
    temp8 = (u8 *)&temp;
    temp9 = sizeof(temp);
    if ((u32)temp8 != 0) {
        do {
            *temp8++ = 0;
        } while (--temp9 != 0);
    }
    temp.unk_04 = arg1;
    temp.unk_08 = arg2;
    temp.unk_00 = arg4;
    if (arg0->unk_304.unk_0C == 0) {
        arg0->unk_328 = 0.0f;
        arg0->unk_32C = arg4;
        arg0->unk_324 = 1;
    }
    temp2.unk_00 = (N *)&arg0->unk_304;
    temp11 = arg0->unk_304.unk_08;
    temp10 = temp11->unk_00;
    temp4.unk_04 = *(volatile f32 *)&temp2.unk_04;
    if (temp10 != temp11) {
        if (temp10->unk_00 != NULL) {
            temp10->unk_00->unk_04 = temp10->unk_04;
        }
        if (temp10->unk_04 != NULL) {
            temp10->unk_04->unk_00 = temp10->unk_00;
        }
        temp10->unk_00 = NULL;
        temp10->unk_04 = NULL;
    } else {
        temp10 = NULL;
    }
    temp12 = temp4.unk_00->unk_04;
    arg0->unk_304.unk_0C++;
    temp13 = &temp10->unk_08;
    temp12->unk_00 = temp10;
    temp4.unk_00->unk_04 = temp10;
    temp10->unk_00 = temp4.unk_00;
    temp10->unk_04 = temp12;
    if ((u32)temp13 != 0) {
        *(F *)temp13 = *(F *)&temp;
    }
    if (arg0->unk_324 == 1) {
        f32 temp15 = 0.0f;
        temp3 = arg0->unk_328 + temp15;
        temp14 = !(temp3 < arg0->unk_32C) ? &arg0->unk_32C : &temp3;
        arg0->unk_328 = *temp14;
        if (arg0->unk_328 >= arg0->unk_32C && arg0->unk_318) {
            (arg0->unk_314->*arg0->unk_318)();
        }
    }
}
}
