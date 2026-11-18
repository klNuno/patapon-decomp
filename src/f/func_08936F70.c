#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088980A4(s32, s32, V *, V *, s32, s32);

void func_08936F70(T *arg0, void *arg1) {
    V v;
    V w;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;
    s32 *f;
    s32 *g;
    s32 n;
    s32 m;
    f32 q0;
    f32 q1;
    f32 q2;
    f32 q3;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    f = func_0885356C(arg1, 5, 1, 4);
    g = func_0885356C(arg1, 6, 1, 4);
    q3 = *(f32 *)c;
    q2 = *(f32 *)b;
    q1 = *(f32 *)e;
    q0 = *(f32 *)d;
    w.unk_00 = q0;
    w.unk_04 = q1;
    v.unk_00 = q2;
    v.unk_04 = q3;
    m = *(volatile s32 *)f;
    n = *(volatile s32 *)g;
    func_088980A4(arg0->unk_14, *a, &v, &w, m != 0, n);
    func_08852F00(arg1, 0);
}
