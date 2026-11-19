#include "common.h"

extern "C" {

struct T0 {
    u8 pad_00[0x30];
    virtual void unk_30_0();
    virtual void unk_30_1();
    virtual void unk_30_2();
    virtual void unk_30_3();
    virtual void unk_30_4();
    virtual void unk_30_5(s32);
};

struct T1 {
    virtual void unk_00_0();
    virtual void unk_00_1(T0 *, s32 *, s32);
};

struct T2 {
    s32 unk_00;
    T1 *unk_04;
    T0 *unk_08;
    s32 *unk_0C;
};

struct T3 {
    T3 *unk_00;
    T3 *unk_04;
    T2 unk_08;
};

struct T4 {
    T3 *unk_00;
    s32 unk_04(const T4 &arg0) const { return unk_00 == arg0.unk_00; }
    bool unk_08(const T4 &arg0) const { return !(bool)unk_04(arg0); }
};

struct T5 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x18];
    u32 unk_20;
};

struct T6 {
    u8 pad_00[0x314];
    T3 *unk_314;
    u8 pad_318[0x60];
    s32 unk_378;
    s32 unk_37C;
};

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_08878FE0(s32, void *, f32);
void func_088BBD9C(void *, s32);
T5 *func_088CFE48(s32, u32);

void func_088CF8C0(T6 *arg0, s32 arg1, u32 arg2) {
    struct { u8 pad_00[8]; T2 unk_08; u8 pad_18[8]; } temp;
    T4 temp0;
    T4 temp1;
    T5 *temp2;
    s32 temp3;
    s32 temp5;
    T1 *temp6;
    s32 *temp7;
    s32 *temp8;
    s32 temp9;

    temp2 = func_088CFE48((s32)arg0, arg2);
    temp2->unk_04 = arg1;
    if (temp2->unk_20 & 1) {
        if (arg1 == 0) {
            func_08878FE0(func_089B53D8(func_088586E8()), (void *)0x30202, 1.0f);
        }
        if (arg0->unk_378 == 1 && arg0->unk_37C == 0 && arg1 != 0) {
            func_08878864(func_089B53D8(func_088586E8()), 0x30202, 2, 1.0f, 0.0f, 0.0f);
        }
        arg0->unk_37C = arg1;
        temp0.unk_00 = arg0->unk_314;
        temp1.unk_00 = (T3 *)&arg0->unk_314;
        if (temp0.unk_08(temp1)) {
            do {
                temp.unk_08 = temp0.unk_00->unk_08;
                if (((volatile T2 *)&temp.unk_08)->unk_08 != NULL) {
                    ++*((volatile T2 *)&temp.unk_08)->unk_0C;
                }
                ((volatile T2 *)&temp.unk_08)->unk_08->unk_30_5(temp2->unk_04);
                if (((volatile T2 *)&temp.unk_08)->unk_08 != NULL) {
                    temp8 = ((volatile T2 *)&temp.unk_08)->unk_0C;
                    temp7 = ((volatile T2 *)&temp.unk_08)->unk_0C;
                    --*temp8;
                    if (temp7 != NULL) {
                        temp9 = *temp7;
                    } else {
                        temp9 = 0;
                    }
                    if (temp9 == 0) {
                        temp6 = ((volatile T2 *)&temp.unk_08)->unk_04;
                        temp5 = ((volatile T2 *)&temp.unk_08)->unk_00;
                        temp6->unk_00_1(((volatile T2 *)&temp.unk_08)->unk_08, temp7, temp5);
                        temp5 = ((volatile T2 *)&temp.unk_08)->unk_00;
                        func_088BBD9C(((volatile T2 *)&temp.unk_08)->unk_08, temp5);
                    }
                }
                temp0.unk_00 = temp0.unk_00->unk_00;
            } while (temp0.unk_08(temp1));
        }
    }
}

}
