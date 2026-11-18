#include "common.h"

extern "C" {

struct V {
    f32 unk_00;
    f32 unk_04;
};

struct A {
    u8 pad_00[0xC0];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(V *, s32, f32, f32);
};

struct E {
    u8 pad_00[0x28];
    A unk_28;
};

struct R {
    u8 pad_00[4];
    V *unk_04;
};

struct T {
    u8 pad_00[0x10];
    s32 unk_10;
};

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF50(s32);
s32 func_088BCF58(s32);

void func_088AA6D0(T *arg0, void *arg1) {
    V v;
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    s32 *e;
    E *q;
    V *p;
    f32 x;
    f32 y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    q = (E *)func_0888A5A0(func_088BCF58(arg0->unk_10), *a);
    if (q == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    p = ((R *)func_088BCF50(arg0->unk_10))->unk_04 + *b;
    y = p->unk_04;
    x = p->unk_00;
    v.unk_00 = x;
    v.unk_04 = y;
    q->unk_28.unk_10(&v, *e == 1, *c, *d);
    func_08852F00(arg1, 0);
}
}
