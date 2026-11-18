#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08889988(s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

void func_088AB620(u8 *arg0, void *arg1) {
    s32 *temp_s0;
    s32 temp_v0;

    temp_s0 = func_0885356C(arg1, 0, 1, 4);
    temp_v0 = func_0888A5A0(func_088BCF58(*(s32 *)(arg0 + 0x10)), *temp_s0);
    if (temp_v0 == 0) {
        func_08852F00(arg1, 0);
        return;
    }
    func_08889988(temp_v0);
    func_08852F00(arg1, 0);
}
