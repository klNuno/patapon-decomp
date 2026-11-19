#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u32 func_08858520(u8 *);
extern u8 D_08A5AEAC[];

#pragma divbyzerocheck on

void func_0884FC88(void *arg0, void *arg1) {
    s32 *temp_s1;
    s32 *temp_s0;

    temp_s1 = func_0885356C(arg1, 0, 1, 4);
    temp_s0 = func_0885356C(arg1, 1, 1, 4);
    if (*temp_s1 > 0) {
        *temp_s0 = func_08858520(D_08A5AEAC) % (u32)*temp_s1;
    } else {
        *temp_s0 = 0;
    }
    func_08852F00(arg1, 0);
}
