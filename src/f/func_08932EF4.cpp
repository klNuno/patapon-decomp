#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00;
    f32 unk_04;
} T0;

typedef struct {
    u8 pad_00[0x58];
    s32 unk_58;
    u8 pad_5C[0x10];
    f32 unk_6C;
    u8 pad_70[4];
    f32 unk_74;
    f32 unk_78;
    f32 unk_7C;
    f32 unk_80;
    u8 pad_84[8];
    f32 unk_8C;
} B;

class C {
public:
    T0 unk_00;
    T0 unk_08;
    T0 unk_10;
    u8 pad_18[4];
    f32 unk_1C;
    u8 pad_20[8];
    T0 unk_28;
    u8 pad_30[0x44];
    u8 unk_74;
    u8 unk_75;
    u8 pad_76[2];
    virtual B *unk_08_v();
    virtual void unk_0C_v();
    virtual void unk_10_v();
    virtual void unk_14_v();
    virtual void unk_18_v(s32, T0 *);
    virtual u8 unk_1C_v();
};

void func_0885429C(T0 *, T0 *);
void func_08933218(C *);
extern T0 D_089E7680[];
extern f32 D_089E7688[];

void func_08932EF4(C *arg0) {
    T0 temp;
    T0 temp2;
    f32 temp9;
    f32 temp8;
    f32 temp7;
    f32 temp6;
    f32 temp5;
    f32 temp4;
    f32 temp3;
    if (arg0->unk_74 == 1) {
        f32 *temp10;
        f32 temp11;
        f32 temp12;
        f32 temp13;
        f32 temp14;
        f32 temp15;

        temp7 = arg0->unk_08_v()->unk_78;
        temp8 = arg0->unk_08_v()->unk_74;
        temp10 = &arg0->unk_08_v()->unk_6C;
        temp10 = D_089E7688[0] < *temp10 ? temp10 : D_089E7688;
        temp9 = *temp10;
        temp5 = D_089E7680[0].unk_00 * temp9;
        temp6 = D_089E7680[0].unk_04 * temp9;
        temp11 = arg0->unk_08_v()->unk_7C;
        temp12 = arg0->unk_28.unk_00 * temp11;
        temp13 = arg0->unk_28.unk_04 * temp11;
        temp3 = arg0->unk_08.unk_00;
        temp4 = arg0->unk_08.unk_04;
        arg0->unk_00.unk_00 += temp3;
        temp6 += temp13;
        arg0->unk_00.unk_04 += arg0->unk_08.unk_04;
        temp5 += temp12;
        temp14 = arg0->unk_08_v()->unk_80;
        temp15 = 1.0f / temp9;
        {
            f32 temp18 = temp5 * temp15;
            f32 temp20 = 1.0f / 30.0f;
            temp18 *= temp20;
            f32 temp19 = temp6 * temp15;
            temp18 *= temp14;
            arg0->unk_08.unk_00 += temp18;
            temp19 *= temp20;
            temp19 *= temp14;
            arg0->unk_08.unk_04 += temp19;
        }
        arg0->unk_08.unk_00 *= temp8;
        arg0->unk_08.unk_04 *= temp7;
        if (arg0->unk_75 == 1) {
            f32 temp16 = arg0->unk_08.unk_04;
            f32 temp17 = arg0->unk_08.unk_00;
            if (temp17 * temp17 + temp16 * temp16 > 0.0001f) {
                func_0885429C(&temp, &arg0->unk_08);
                arg0->unk_10.unk_00 = temp.unk_00;
                arg0->unk_10.unk_04 = temp.unk_04;
            }
        }

        func_08933218(arg0);
        if (arg0->unk_1C <= arg0->unk_08_v()->unk_8C) {
            arg0->unk_75 = 0;
            temp5 = -arg0->unk_1C + arg0->unk_08_v()->unk_8C;
            if (arg0->unk_08_v()->unk_58 == 0) {
                arg0->unk_00.unk_04 += temp5;
                arg0->unk_08.unk_04 += temp5;
            } else {
                f32 temp16 = temp4 > 1.1920929e-7f ? temp5 / temp4 : 0.0f;
                arg0->unk_00.unk_00 += temp3 * temp16;
                arg0->unk_00.unk_04 += temp5;
            }
            if (arg0->unk_1C_v() == 1) {
                f32 temp20 = arg0->unk_00.unk_04 - 1.0f;
                temp2.unk_00 = arg0->unk_00.unk_00;
                temp2.unk_04 = temp20;
                arg0->unk_18_v(1, &temp2);
            }
            func_08933218(arg0);
        }
    }
}
}
