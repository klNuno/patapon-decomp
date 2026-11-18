#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x2C];
    s32 unk_2C;
    u8 pad_30[0x506C0];
    u8 unk_506F0[1];
} W;

typedef struct {
    u8 pad_00[0x10];
    W *unk_10;
    u8 pad_14[4];
    s32 unk_18;
    f32 unk_1C;
} T;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0887ED78(s32, s32);
s32 func_0887EDA8(s32, s32);
s32 func_088C6464(void *);
void func_088F8894(s32, s32, V *);
void func_088F89E8(s32, s32);

void func_088FFA00(T *arg0, void *arg1)
{
    V a;
    V b;
    V c;
    V d;
    s32 n;
    s32 *p;
    f32 *q;
    s32 t;
    f32 x;

    n = func_08852EB8(arg1);
    if (n == 0) {
        p = func_0885356C(arg1, 0, 1, 4);
        q = (f32 *)func_0885356C(arg1, 1, 1, 4);
        arg0->unk_18 = *p;
        arg0->unk_1C = *q;
        func_08852EDC(arg1, n + 1);
    } else if (n == 1) {
        t = func_088C6464(arg0->unk_10->unk_506F0);
        x = arg0->unk_1C;
        if (func_0887ED78(arg0->unk_10->unk_2C, 0x1000) != 0) {
            x *= 0.5f;
        }
        if (func_0887ED78(arg0->unk_10->unk_2C, 0x8000) != 0) {
            x *= 2.0f;
        }
        if (func_0887ED78(arg0->unk_10->unk_2C, 0x10) != 0) {
            a.unk_00 = 0.0f;
            a.unk_04 = x;
            func_088F8894(t, arg0->unk_18, &a);
        }
        if (func_0887ED78(arg0->unk_10->unk_2C, 0x40) != 0) {
            b.unk_00 = 0.0f;
            b.unk_04 = -x;
            func_088F8894(t, arg0->unk_18, &b);
        }
        if (func_0887ED78(arg0->unk_10->unk_2C, 0x80) != 0) {
            c.unk_04 = 0.0f;
            c.unk_00 = -x;
            func_088F8894(t, arg0->unk_18, &c);
        }
        if (func_0887ED78(arg0->unk_10->unk_2C, 0x20) != 0) {
            d.unk_00 = x;
            d.unk_04 = 0.0f;
            func_088F8894(t, arg0->unk_18, &d);
        }
        if (func_0887EDA8(arg0->unk_10->unk_2C, 0x2000) != 0) {
            func_08852F00(arg1, 0);
        }
        func_088F89E8(t, arg0->unk_18);
    }
}
