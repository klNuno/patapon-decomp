#include "common.h"

s32 *func_0885356C(void *, s32, s32, s32);
void func_08945F18(void *, s32, s32);
void func_08852F00(void *, s32);

void func_08911A0C(u8 *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 *temp1 = func_0885356C(arg1, 1, 1, 4);
    func_08945F18(arg0 + 0x10, *temp, *temp1);
    func_08852F00(arg1, 0);
}
