#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

typedef struct {
    f32 unk_00, unk_04;
} V;

f32 func_08819D88(f32);
f32 func_0881A1E0(f32);
f32 func_0881A3F4(f32, f32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
f32 func_088542D4(V *);
s32 func_088586E8(void);
u32 func_089B5464(s32);
s32 func_0892A498(s32, s32, V *, V *, s32, s32, f32);
void func_0892C83C(char *, s32);

void func_0892EB9C(T *arg0, void *arg1) {
    V temp, temp2, temp3;
    s32 *p3, *p2, *p1, *p6, *p0, *p4, *p5;
    s32 *p7, *p8;
    s32 *p9;
    f32 b, a, c, d, e, f, t;
    s32 ret;

    p0 = func_0885356C(arg1, 0, 1, 4);
    p1 = func_0885356C(arg1, 1, 1, 4);
    p2 = func_0885356C(arg1, 2, 1, 4);
    p3 = func_0885356C(arg1, 3, 1, 4);
    p4 = func_0885356C(arg1, 4, 1, 4);
    p5 = func_0885356C(arg1, 5, 1, 4);
    p6 = func_0885356C(arg1, 6, 1, 4);
    p7 = func_0885356C(arg1, 7, 1, 4);
    p8 = func_0885356C(arg1, 8, 1, 4);
    p9 = func_0885356C(arg1, 9, 1, 4);
    a = *(f32 *)p6;
    b = -a;
    c = (f32)func_089B5464(func_088586E8());
    c /= 4294967296.0f;
    t = a - b;
    t *= c;
    a = b + t;
    a = (a < 0.0f) ? 360.0f + a : a;
    e = *(volatile f32 *)p5;
    d = *(volatile f32 *)p4;
    t = func_0881A3F4(d, e);
    t += 0.017453292f * a;
    a = t;
    d = func_08819D88(a);
    e = func_0881A1E0(a);
    temp.unk_04 = d;
    temp.unk_00 = e;
    e = *(f32 *)p5;
    d = *(f32 *)p4;
    temp2.unk_00 = d;
    temp2.unk_04 = e;
    f = func_088542D4(&temp2);
    temp.unk_00 *= f;
    temp.unk_04 *= f;
    e = *(f32 *)p3;
    d = *(f32 *)p2;
    temp3.unk_00 = d;
    temp3.unk_04 = e;
    t = *(f32 *)p7;
    if ((ret = func_0892A498(arg0->unk_10, *p0, &temp3, &temp, *p1, *p8, t)) != 0) {
        func_0892C83C((char *)ret, *p9);
    }
    func_08852F00(arg1, 0);
}
