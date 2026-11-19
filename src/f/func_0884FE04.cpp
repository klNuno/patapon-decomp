#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_0884FE04(void *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 *temp2 = func_0885356C(arg1, 1, 1, 4);

    *temp ^= *temp2;
    func_08852F00(arg1, 0);
}

}
