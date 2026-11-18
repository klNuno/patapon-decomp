#include "common.h"

typedef struct S S;
typedef struct {
    u8 pad_00[0x10];
    S *unk_10;
} T;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

f32 func_08819D88(f32);
f32 func_0881A1E0(f32);
f32 func_0881A3F4(f32, f32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
f32 func_088542D4(V *);
s32 func_088586E8(void);
u32 func_089B5464(s32);
s32 func_0892A5E0(S *, s32, s32, u8, s32, s32, f32);

void func_0892EE38(T *arg0, void *arg1)
{
    V temp, temp2, temp3;
    s32 *temp4;
    s32 *temp5;
    s32 *temp6;
    f32 *temp7;
    f32 *temp8;
    f32 *temp9;
    f32 *temp10;
    f32 *temp11;
    f32 *temp12;
    f32 temp14, temp13, temp15, temp16, temp17, temp18;

    temp4 = func_0885356C(arg1, 0, 1, 4);
    temp5 = func_0885356C(arg1, 1, 1, 4);
    temp6 = func_0885356C(arg1, 2, 1, 4);
    temp7 = (f32 *)func_0885356C(arg1, 3, 1, 4);
    temp8 = (f32 *)func_0885356C(arg1, 4, 1, 4);
    temp9 = (f32 *)func_0885356C(arg1, 5, 1, 4);
    temp10 = (f32 *)func_0885356C(arg1, 6, 1, 4);
    temp11 = (f32 *)func_0885356C(arg1, 7, 1, 4);
    temp12 = (f32 *)func_0885356C(arg1, 8, 1, 4);
    temp13 = *temp11;
    temp14 = -temp13;
    temp15 = (f32)func_089B5464(func_088586E8()) / 4294967296.0f;
    temp13 -= temp14;
    temp13 *= temp15;
    temp16 = (3.1415927f * (temp14 + temp13)) / 180.0f;
    temp16 += func_0881A3F4(*temp9, *temp10);
    temp17 = func_08819D88(temp16);
    temp18 = func_0881A1E0(temp16);
    temp.unk_04 = temp17;
    temp.unk_00 = temp18;
    temp18 = *temp10;
    temp17 = *temp9;
    temp2.unk_00 = temp17;
    temp2.unk_04 = temp18;
    temp15 = func_088542D4(&temp2);
    temp.unk_00 *= temp15;
    temp.unk_04 *= temp15;
    temp18 = *temp8;
    temp17 = *temp7;
    temp3.unk_00 = temp17;
    temp3.unk_04 = temp18;
    func_0892A5E0(arg0->unk_10, *temp4, *temp5, *temp6 == 1, (s32)&temp3, (s32)&temp, *temp12);
    func_08852F00(arg1, 0);
}
