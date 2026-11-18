#include "common.h"

u32 func_08852B58(void *);
s32 func_08852B60(void *);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 func_08852F6C(void *);
void func_08852F90(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);

void func_0884FB88(void *arg0, void *arg1) {
    s32 temp = func_08852EB8(arg1);

    if (temp == 0) {
        f32 *temp2 = func_0885356C(arg1, 0, 1, 4);
        func_08852F90(arg1, (s32)(*temp2 * (f32)func_08852B58(arg1)));
        func_08852EDC(arg1, temp + 1);
    }
    if (func_08852F6C(arg1) > 0) {
        s32 temp3 = func_08852B60(arg1);
        func_08852F90(arg1, func_08852F6C(arg1) - temp3);
    } else {
        func_08852F90(arg1, 0);
        func_08852F00(arg1, 0);
    }
}
