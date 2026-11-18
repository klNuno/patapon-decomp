#include "common.h"

void func_0881F120(void *, void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_088521B4(void *arg0, void *arg1) {
    s32 *a;
    s32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    func_0881F120(a, b, *func_0885356C(arg1, 2, 1, 4) * 4);
    func_08852F00(arg1, 0);
}
