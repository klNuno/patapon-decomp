#include "common.h"

extern "C" {
class A {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34(s32);
    virtual void unk_38(s32);
};

typedef struct {
    A *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} S;

extern s32 D_08A08538[], D_08A0853C[];
s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_0887EDA8(s32, s32);
s32 func_0887EDB8(void *, s32);
void func_08878864(s32, s32, s32, f32, f32, f32);

void func_089B13DC(S *arg0, void *arg1, void *arg2, s32 arg3)
{
    s32 temp, temp2, temp3, temp4, temp5, temp6;
    s32 temp7 = 0;

    if (func_0887EDB8(arg2, 0x10) != 0) {
        temp = arg0->unk_14 - 1;
        arg0->unk_14 = *(D_08A08538[0] < temp ? &temp : D_08A08538);
        if (arg0->unk_14 < arg0->unk_1C) {
            temp2 = arg0->unk_1C - 1;
            arg0->unk_1C = *(D_08A0853C[0] < temp2 ? &temp2 : D_08A0853C);
        }
        temp7 = 1;
    }
    if (func_0887EDB8(arg2, 0x40) != 0) {
        temp4 = arg0->unk_14 + 1;
        temp3 = arg0->unk_04 - 1;
        arg0->unk_14 = *(temp4 < temp3 ? &temp4 : &temp3);
        if ((u32)(arg0->unk_1C + arg0->unk_0C - 1) < (u32)arg0->unk_14) {
            temp6 = arg0->unk_1C + 1;
            temp5 = arg0->unk_04 - arg0->unk_0C;
            arg0->unk_1C = *(temp6 < temp5 ? &temp6 : &temp5);
        }
        temp7 = 1;
    }
    if (func_0887EDB8(arg2, 0x80) != 0) {
        if (--arg0->unk_10 < 0) {
            arg0->unk_10 = arg0->unk_08 - 1;
        }
        temp7 = 1;
    }
    if (func_0887EDB8(arg2, 0x20) != 0) {
        if ((u32)++arg0->unk_10 > (u32)(arg0->unk_08 - 1)) {
            arg0->unk_10 = 0;
        }
        temp7 = 1;
    }
    if ((u8)temp7 == 1) {
        arg0->unk_18 = arg0->unk_10 + arg0->unk_14 * arg0->unk_08;
        arg0->unk_00->unk_34(arg0->unk_18);
        func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
    }
    if (arg3 != 0 && func_0887EDA8((s32)arg2, 0x4000) != 0) {
        arg0->unk_00->unk_38(arg0->unk_18);
    }
}
}
