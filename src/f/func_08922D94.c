#include "common.h"

void func_08852F00(void *, s32);
void *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_08923600(void *, s32, f32, f32);

void func_08922D94(void *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    func_08923600(func_089B53D8(func_088586E8()) + 0x2844, *a, *b, *c);
    func_08852F00(arg1, 0);
}
