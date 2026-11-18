#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0892A86C(s32, s32, V *, f32, s32);
void func_0892C10C(s32, f32, f32);
void func_0892C14C(s32, f32, f32);
void func_08932A1C(s32, s32, f32, f32, s32, f32, s32);

void func_0892FD50(T *arg0, void *arg1) {
    V temp;
    s32 *a;
    f32 *b, *c, *d, *e, *f, *g;
    s32 *h;
    s32 t;
    f32 x, y;
    f32 v0, v1;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    g = (f32 *)func_0885356C(arg1, 6, 1, 4);
    h = func_0885356C(arg1, 7, 1, 4);
    v1 = *c;
    v0 = *b;
    temp.unk_00 = v0;
    temp.unk_04 = v1;
    t = func_0892A86C(arg0->unk_10, *a, &temp, *d, *h);
    if (t != 0) {
        x = *e;
        if (x > 0.0f) {
            func_0892C10C(t, x, *f);
        }
        y = *g;
        if (y > 0.0f) {
            func_08932A1C(t, 0x10, y - 0.1f, 1.0f, 3, 5.0f, 0);
            func_0892C14C(t, *g, 0.5f);
        }
    }
    func_08852F00(arg1, 0);
}
