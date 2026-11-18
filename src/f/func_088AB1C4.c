#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
void func_08935B44(void *, s32, f32, f32);

void func_088AB1C4(void *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    u8 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    p = func_0888A5A0(func_088BCF58(*(s32 *)((u8 *)arg0 + 0x10)), *a);
    if (p == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    func_08935B44(p + 0xF8, *b, *c, *d);
    func_08852F00(arg1, 0);
}
