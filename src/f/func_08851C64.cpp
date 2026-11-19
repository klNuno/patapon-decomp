#include "common.h"

extern "C" {
s32 *func_0885356C(void *, s32, s32, s32);
void func_08852B4C(void *, s32);
void func_08852F00(void *, s32);

void func_08851C64(void *arg0, void *arg1)
{
    func_08852B4C(arg1, *func_0885356C(arg1, 0, 1, 4) != 0);
    func_08852F00(arg1, 0);
}
}
