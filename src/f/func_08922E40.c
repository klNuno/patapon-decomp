#include "common.h"

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_088792C0(s32, f32);

void func_08922E40(void *arg0, void *arg1)
{
    f32 *temp = func_0885356C(arg1, 0, 1, 4);

    func_088792C0(func_089B53D8(func_088586E8()), *temp);
    func_08852F00(arg1, 0);
}
