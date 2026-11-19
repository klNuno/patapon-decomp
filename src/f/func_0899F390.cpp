#include "common.h"

extern "C" {

struct P {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C(u32);
};
struct C;
typedef void (C::*F)(void);

struct S {
    s32 unk_00, unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C, unk_10;
    u8 pad_14[0xC];
    P unk_20;
    u8 pad_A4[0x9C];
    s32 unk_140;
    f32 unk_144, unk_148;
    C *unk_14C;
    F unk_150;
    u8 unk_15C;
    u8 pad_15D[3];
    f32 unk_160, unk_164;
    u8 pad_168[8];
    s32 unk_170;
};

s32 func_088586E8(void);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887ED98(s32, s32);
s32 func_0887EDA8(s32, s32);
s32 func_08998080(s32, s32);
u32 func_0899A900(s32);
void func_089A04E4(S *);
s32 func_089A4664(s32, s32, s32);
void func_089A4720(s32);
void func_089A472C(s32);
void func_089A4768(s32, s32, s32);
void func_089A47C8(s32);
extern void func_089A48B0(s32, s32);
s32 func_089A53F8(s32);
s32 func_089A5444(s32);
s32 func_089B53D8(s32);

extern f32 D_089EF440[], D_08A06EA4[];

void func_0899F390(S *arg0, u32 arg1)
{
    f32 temp0, temp1, temp2;
    s32 temp3;
    f32 temp4;
    f32 *temp6;
    s32 temp7, temp8;
    s32 temp9;
    f32 temp10;
    s32 temp11;

    temp9 = func_089A5444(arg0->unk_04);
    temp3 = func_08998080(temp9, arg0->unk_10);
    if (func_0899A900(temp3) == 0) {
        return;
    }
    temp4 = arg0->unk_148;
    temp4 += 0.2f;
    arg0->unk_148 = temp4;
    if (temp4 >= 3.1415927f) {
        arg0->unk_148 = temp4 - 3.1415927f;
    }
    temp11 = arg0->unk_140;
    if (temp11 == 1) {
        temp10 = arg0->unk_144;
        temp0 = temp10 - (f32)arg1 / 4800.0f;
        temp6 = D_08A06EA4[0] < temp0 ? &temp0 : D_08A06EA4;
        arg0->unk_144 = *temp6;
    } else if (temp11 == 2) {
        temp10 = arg0->unk_144;
        temp1 = temp10 + (f32)arg1 / 4800.0f;
        temp6 = temp1 < D_089EF440[0] ? &temp1 : D_089EF440;
        arg0->unk_144 = *temp6;
    }
    if (arg0->unk_08 == 0) {
        arg0->unk_148 = 1.5707964f;
        return;
    }
    arg0->unk_20.unk_0C(arg1);
    if ((u8)func_089A53F8(arg0->unk_04) == 0) {
        if (func_0887ED98(arg0->unk_00, 0x20) != 0) {
            temp7 = arg0->unk_0C - 1;
            arg0->unk_0C = temp7;
            if (temp7 < 0) {
                arg0->unk_0C = func_0899A900(temp3) - 1;
            }
            temp9 = *(volatile s32 *)&arg0->unk_04;
            func_089A48B0(temp9, *(volatile s32 *)&arg0->unk_0C);
            func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
        }
        if (func_0887ED98(arg0->unk_00, 0x80) != 0) {
            temp7 = arg0->unk_0C + 1;
            arg0->unk_0C = temp7;
            if (func_0899A900(temp3) - 1 < (u32)temp7) {
                arg0->unk_0C = 0;
            }
            temp11 = *(volatile s32 *)&arg0->unk_0C;
            temp9 = *(volatile s32 *)&arg0->unk_04;
            func_089A48B0(temp9, temp11);
            func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
        }
        if (func_0887EDA8(arg0->unk_00, 0x4000) != 0) {
            temp8 = arg0->unk_170;
            if (temp8 == -1) {
                temp9 = *(volatile s32 *)&arg0->unk_04;
                if (func_089A4664(temp9, *(volatile s32 *)&arg0->unk_0C, temp8) != 0) {
                    arg0->unk_08 = 0;
                    func_08878864(func_089B53D8(func_088586E8()), 8, 2, 1.0f, 0.0f, 0.0f);
                    return;
                }
            } else if (temp8 != arg0->unk_0C) {
                func_089A4768(arg0->unk_04, arg0->unk_0C, temp8);
                arg0->unk_170 = -1;
            }
        }
        if (func_0887EDA8(arg0->unk_00, 0x2000) != 0) {
            if (arg0->unk_170 == -1) {
                func_089A4720(arg0->unk_04);
                arg0->unk_08 = 0;
                func_089A04E4(arg0);
                func_08878864(func_089B53D8(func_088586E8()), 0x210006, 2, 1.0f, 0.0f, 0.0f);
                return;
            }
            arg0->unk_170 = -1;
        }
        if (arg0->unk_170 == -1) {
            temp9 = func_089A5444(arg0->unk_04);
            if (func_0899A900(func_08998080(temp9, arg0->unk_10)) > 1U) {
                if (func_0887EDA8(arg0->unk_00, 1) != 0) {
                    func_089A472C(arg0->unk_04);
                    return;
                }
                if (func_0887EDA8(arg0->unk_00, 0x8000) != 0) {
                    arg0->unk_170 = arg0->unk_0C;
                    return;
                }
            }
            if (func_0887EDA8(arg0->unk_00, 0x1000) != 0) {
                func_089A47C8(arg0->unk_04);
            }
        }
    } else {
        if (arg0->unk_15C != 1) {
            return;
        }
        temp10 = arg0->unk_160;
        temp2 = temp10 + (f32)arg1 / 4800.0f;
        if (!(temp2 < arg0->unk_164)) {
            temp6 = &arg0->unk_164;
        } else {
            temp6 = &temp2;
        }
        temp4 = *temp6;
        arg0->unk_160 = temp4;
        if (temp4 >= arg0->unk_164 && arg0->unk_150) {
            (arg0->unk_14C->*arg0->unk_150)();
        }
    }
}

}
