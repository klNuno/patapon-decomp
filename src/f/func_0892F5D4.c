#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S_0892F5D4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0892AB90(s32, s32);
void func_08932A1C(s32, s32, f32, f32, s32, f32, s32);

void func_0892F5D4(S_0892F5D4 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    s32 *e;
    f32 *f;
    u32 *g;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    g = (u32 *)func_0885356C(arg1, 6, 1, 4);
    func_08932A1C(func_0892AB90(arg0->unk_10, *a), *b, *c, *d, *e, *f, *g);
    func_08852F00(arg1, 0);
}
