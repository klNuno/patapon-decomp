#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
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
s32 func_0892A748(s32, s32, s32, V *, V *, f32);
void func_0892C10C(s32, f32, f32);
void func_0892C14C(s32, f32, f32);
void func_08932A1C(s32, s32, f32, f32, s32, f32, s32);

void func_0892FA20(T *arg0, void *arg1) {
    V temp0, temp1, temp2;
    s32 *temp3, *temp4;
    f32 *temp5, *temp6, *temp7, *temp8, *temp9;
    f32 *temp10, *temp11, *temp12, *temp13;
    f32 temp14, temp15, temp16, temp17, temp18, temp19;
    s32 temp20, y;
    f32 z, x0, x1;
    s32 y0, y1;

    temp3 = func_0885356C(arg1, 0, 1, 4);
    temp4 = func_0885356C(arg1, 1, 1, 4);
    temp5 = (f32 *)func_0885356C(arg1, 2, 1, 4);
    temp6 = (f32 *)func_0885356C(arg1, 3, 1, 4);
    temp7 = (f32 *)func_0885356C(arg1, 4, 1, 4);
    temp8 = (f32 *)func_0885356C(arg1, 5, 1, 4);
    temp9 = (f32 *)func_0885356C(arg1, 6, 1, 4);
    temp10 = (f32 *)func_0885356C(arg1, 7, 1, 4);
    temp11 = (f32 *)func_0885356C(arg1, 8, 1, 4);
    temp12 = (f32 *)func_0885356C(arg1, 9, 1, 4);
    temp13 = (f32 *)func_0885356C(arg1, 10, 1, 4);
    temp15 = *temp9;
    temp14 = -temp15;
    z = (f32)func_089B5464(func_088586E8());
    temp16 = 4294967296.0f;
    temp16 = z / temp16;
    temp15 -= temp14;
    temp15 *= temp16;
    temp14 += temp15;
    temp15 = temp14;
    temp15 = temp15 < 0.0f ? 360.0f + temp15 : temp15;
    x1 = *(volatile f32 *)temp8;
    x0 = *(volatile f32 *)temp7;
    temp17 = func_0881A3F4(x0, x1);
    temp17 += 0.017453292f * temp15;
    temp18 = func_08819D88(temp17);
    temp19 = func_0881A1E0(temp17);
    temp0.unk_04 = temp18;
    temp0.unk_00 = temp19;
    temp19 = *temp8;
    temp18 = *temp7;
    temp1.unk_00 = temp18;
    temp1.unk_04 = temp19;
    temp16 = func_088542D4(&temp1);
    temp0.unk_00 *= temp16;
    temp0.unk_04 *= temp16;
    temp19 = *temp6;
    temp18 = *temp5;
    temp2.unk_00 = temp18;
    temp2.unk_04 = temp19;
    y = *(volatile s32 *)temp4;
    y0 = *(volatile s32 *)&arg0->unk_10;
    y1 = *(volatile s32 *)temp3;
    temp20 = func_0892A748(y0, y1, y, &temp2, &temp0, *temp10);
    if (temp20 != 0) {
        f32 x = *temp11;
        if (x > 0.0f) {
            func_0892C10C(temp20, x, *temp12);
        }
        x = *temp13;
        if (x > 0.0f) {
            func_08932A1C(temp20, 0x10, x - 0.1f, 1.0f, 3, 5.0f, 0);
            func_0892C14C(temp20, *temp13, 0.5f);
        }
    }
    func_08852F00(arg1, 0);
}
