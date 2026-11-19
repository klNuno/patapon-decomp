#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
extern s8 D_089F81C0[];

void func_08852480(void *arg0, void *arg1) {
    D_089F81C0[0] = *func_0885356C(arg1, 0, 1, 4) == 1;
    func_08852F00(arg1, 0);
}
