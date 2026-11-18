#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T_089A7B84;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08961384(s32, s32, s32, f32 *, f32 *, s32, s32, s32);

void func_089A7B84(T_089A7B84 *arg0, void *arg1) {
    f32 u[2];
    f32 t[2];
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    f32 *e;
    f32 *f;
    s32 *g;
    s32 *h;
    s32 *i;
    f32 x0;
    f32 x1;
    f32 x2;
    f32 x3;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    g = func_0885356C(arg1, 6, 1, 4);
    h = func_0885356C(arg1, 7, 1, 4);
    i = func_0885356C(arg1, 8, 1, 4);
    x3 = *d;
    x2 = *c;
    x1 = *f;
    x0 = *e;
    t[0] = x0;
    t[1] = x1;
    u[0] = x2;
    u[1] = x3;
    func_08961384(arg0->unk_10, *a, *b, u, t, *g != 0, *h != 0, *i);
    func_08852F00(arg1, 0);
}
