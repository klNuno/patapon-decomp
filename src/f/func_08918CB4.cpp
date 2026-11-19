#include "common.h"

extern "C" {
class A {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual f32 *unk_28();
};

struct T {
    u8 pad_00[8];
    f32 unk_08;
    u8 pad_0C[4];
    A *unk_10;
    u8 pad_14[4];
    f32 unk_18;
    u8 unk_1C;
    u8 pad_1D[0x13];
    s32 unk_30;
    u8 pad_34[0xC];
    s32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    f32 unk_54;
};

struct F08901694;
extern s32 func_088586E8(void);
f32 func_08866564(f32, u32, u32);
s32 func_088E2494(s32);
s32 func_088E24A4(s32);
s32 func_088E5574(s32);
s32 func_088F9858(void *);
void func_0890988C(F08901694 *arg0, s32 arg1);
s32 func_08909918(char *arg0, f32 fparg0);
void func_08909DB4(T *, s32);
void func_0890AA8C(s32, s32, s32, s32);
s32 func_0890AC7C(s32);
extern u32 func_089B5464(s32);
extern f32 D_08A008A4[];

void func_08918CB4(T *arg0, s32 arg1) {
    f32 temp;
    f32 *temp2;
    s32 temp3;
    u32 temp4;
    f32 temp5;

    temp3 = func_0890AC7C(func_088E5574((s32)arg0->unk_10));
    func_08909DB4(arg0, arg1);
    if (temp3 != func_0890AC7C(func_088E5574((s32)arg0->unk_10))) {
        temp3 = arg0->unk_30;
        if (temp3 == func_0890AC7C(func_088E5574((s32)arg0->unk_10))) {
            temp4 = func_089B5464(func_088586E8()) % 100U;
            temp5 = (f32)temp4;
            arg0->unk_54 = D_08A008A4[0] * (0.01f * temp5);
        }
    }
    arg0->unk_18 = 0.0f;
    if (arg0->unk_1C != 0 && func_088E2494((s32)arg0->unk_10) == 0 && func_088E24A4((s32)arg0->unk_10) == 0) {
        temp3 = arg0->unk_40;
        if (temp3 == func_0890AC7C(func_088E5574((s32)arg0->unk_10))) {
            arg0->unk_18 = arg0->unk_50;
            func_0890988C((F08901694 *)arg0, arg1);
            if (func_08909918((char *)arg0, arg0->unk_4C) != 0) {
                func_0890AA8C(func_088E5574((s32)arg0->unk_10), arg0->unk_30, 1, 1);
                temp4 = func_089B5464(func_088586E8()) % 100U;
                temp5 = (f32)temp4;
                arg0->unk_54 = D_08A008A4[0] * (0.01f * temp5);
            }
        } else if (arg0->unk_54 <= 0.0f) {
            temp4 = func_089B5464(func_088586E8()) % 50U;
            temp5 = (f32)temp4;
            f32 temp6 = 50.0f;
            temp6 += temp5;
            temp = 0.01f * temp6;
            temp2 = arg0->unk_10->unk_28();
            if (func_088F9858(arg0->unk_10) == 0) {
                arg0->unk_08 = 1.0f;
                temp5 = *temp2;
                temp5 += temp * (arg0->unk_44 - temp5);
            } else {
                arg0->unk_08 = -1.0f;
                temp5 = *temp2;
                temp5 += temp * (arg0->unk_48 - temp5);
            }
            arg0->unk_4C = temp5;
            func_0890AA8C(func_088E5574((s32)arg0->unk_10), arg0->unk_40, 1, 1);
        } else {
            arg0->unk_54 -= func_08866564(1.0f, arg1, 0x12C0);
        }
    }
}
}
