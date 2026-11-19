#include "common.h"

typedef struct F08901694 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    void *unk_10;
    u8 pad_14[4];
    f32 unk_18;
    u8 unk_1C;
    u8 pad_1D[0x13];
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[8];
    s32 unk_40;
    u8 pad_44[4];
    f32 unk_48;
    f32 unk_4C;
    u8 pad_50[8];
    u8 unk_58;
} F08901694;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

f32 fabsf(f32);
f32 func_088542D4(V *);
void func_088E248C(void *, s32);
s32 func_088E5574(s32);
void func_088F9778(void *, F08901694 *, s32);
void func_088F9F20(char *, s8);
void func_0890988C(F08901694 *);
void func_0890AA8C(s32, s32, s32, s32);

void func_089900E8(F08901694 *arg0)
{
    V temp;
    s32 b;
    s32 a;
    f32 x;
    f32 y;
    f32 z;

    func_0890988C(arg0);
    a = (s32)(arg0->unk_08 < 0.0f ? (void *)0 : (void *)1);
    func_088F9778(arg0->unk_10, arg0, a);
    x = arg0->unk_04 - arg0->unk_4C;
    y = arg0->unk_00 - arg0->unk_48;
    b = 0;
    temp.unk_04 = x;
    temp.unk_00 = y;
    if (func_088542D4(&temp) <= 1.1920929e-7f) {
        b = 1;
    }
    x = arg0->unk_08;
    if (fabsf(x) > 0.0f) {
        if (x >= 0.0f && arg0->unk_48 <= arg0->unk_00) {
            b = 1;
            goto end;
        }
        if (x < 0.0f && arg0->unk_48 >= arg0->unk_00) {
            b = 1;
        }
    } else {
        z = arg0->unk_0C;
        if (z >= 0.0f && arg0->unk_4C <= arg0->unk_04) {
            b = 1;
            goto end;
        }
        if (z < 0.0f && arg0->unk_4C >= arg0->unk_04) {
            b = 1;
        }
    }
end:
    if (b != 0) {
        func_088F9778(arg0->unk_10, (F08901694 *)&arg0->unk_48, a);
        func_0890AA8C(func_088E5574((s32)arg0->unk_10), arg0->unk_30, 1, 1);
        func_088E248C(arg0->unk_10, arg0->unk_34 >= 0);
        arg0->unk_1C = 1;
        arg0->unk_40 = 1;
        if (arg0->unk_58 != 0) {
            func_088F9F20((char *)arg0->unk_10, 1);
        }
    }
}
