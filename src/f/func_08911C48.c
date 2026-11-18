#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088F5198(void *, s32, s32);
void *func_089AE598(void *);

void func_08911C48(u8 *arg0, void *arg1) {
    s32 *temp_s1;
    s32 *temp_s0;

    temp_s1 = func_0885356C(arg1, 0, 1, 4);
    temp_s0 = func_0885356C(arg1, 1, 1, 4);
    func_088F5198(func_089AE598(*(void **)(arg0 + 0x1C)), *temp_s1, *temp_s0);
    func_08852F00(arg1, 0);
}
