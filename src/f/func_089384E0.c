#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_0897C56C(void *, s32, f32, f32);

void func_089384E0(void *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    f32 *b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    f32 *c = (f32 *)func_0885356C(arg1, 2, 1, 4);

    func_0897C56C((u8 *)func_089B53D8(func_088586E8()) + 0x14, *a, *b, *c);
    func_08852F00(arg1, 0);
}
