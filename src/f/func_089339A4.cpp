#include "common.h"
extern "C" {
struct T1 { f32 unk_00, unk_04; };
struct T2 {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual T1 *unk_28();
};
struct T {
    u8 pad_00[8];
    f32 unk_08;
    u8 pad_0C[4];
    T2 *unk_10;
    u8 pad_14[0x38];
    f32 unk_4C, unk_50;
};
struct M_08909BEC { u8 pad_00[0x506F0]; u8 unk_506F0[1]; };
s32 func_088586E8(void);
u32 func_089B5464(s32);
s32 func_088C6464(void *);
M_08909BEC *func_088E2464(s32);
s32 func_088F9858(void *);
s32 func_088F8E94(s32, T1 *);

f32 func_089339A4(T *arg0) {
    T1 temp0;
    T1 *temp1;
    u32 i;
    s32 temp2;
    f32 temp3, temp4, temp5;

    i = 0;
    temp1 = arg0->unk_10->unk_28();
    temp2 = func_088F9858(arg0->unk_10);
    do {
        temp3 = 0.01f * (50.0f + (f32)(func_089B5464(func_088586E8()) % 50U));
        if (temp2 == 0) {
            arg0->unk_08 = 1.0f;
            temp4 = temp1->unk_00;
            temp2 = 1;
            temp5 = temp4 + temp3 * (arg0->unk_4C - temp4);
        } else {
            arg0->unk_08 = -1.0f;
            temp4 = temp1->unk_00;
            temp2 = 0;
            temp5 = temp4 + temp3 * (arg0->unk_50 - temp4);
        }
        temp0.unk_04 = temp1->unk_04;
        temp0.unk_00 = temp5;
        if ((u8)func_088F8E94(func_088C6464(func_088E2464((s32)arg0->unk_10)->unk_506F0), &temp0) == 0) {
            break;
        }
    } while (i++ < 10U);
    return temp5;
}
}
