#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

typedef struct {
    u8 pad_00[0x170];
    u8 unk_170[4];
} U;

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
s32 func_0892AB90(s32, s32);
void func_08933488(void *, f32 *);
V *func_0893349C(void *);

void func_0892F434(T *arg0, void *arg1) {
    V a;
    f32 b[2];
    s32 *p;
    f32 *q;
    U *u;
    V *v;
    f32 x, y, t, n;

    p = func_0885356C(arg1, 0, 1, 4);
    q = (f32 *)func_0885356C(arg1, 1, 1, 4);
    u = (U *)func_0892AB90(arg0->unk_10, *p);
    v = func_0893349C(u->unk_170);
    a.unk_00 = v->unk_00;
    a.unk_04 = v->unk_04;
    t = (3.1415927f * *q) / 180.0f;
    t += func_0881A3F4(a.unk_00, a.unk_04);
    y = func_08819D88(t);
    x = func_0881A1E0(t);
    b[0] = x;
    b[1] = y;
    n = func_088542D4(&a);
    b[0] *= n;
    b[1] *= n;
    func_08933488(u->unk_170, b);
    func_08852F00(arg1, 0);
}
