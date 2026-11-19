#include "common.h"

extern "C" {
void func_08852C5C(void *, s32, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_08851A14(void *arg0, void *arg1)
{
    func_08852C5C(arg1, *func_0885356C(arg1, 0, 1, 4) * 4, 1);
    func_08852C5C(arg1, *func_0885356C(arg1, 1, 0, 4), 0);
    func_08852F00(arg1, 0);
}
}
