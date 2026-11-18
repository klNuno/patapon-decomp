#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0885369C(void *, s32);
u8 func_088533F8(char *arg0, s32 arg1);

void func_0884F904(void *arg0, char *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    u8 temp2 = (u8)func_088533F8(arg1, 0);
    func_0885369C(arg1, 0);
    if (temp2 & 0x70) {
        *(f32 *)temp += 1.0f;
    } else {
        *temp += 1;
    }
    func_0885369C(arg1, 0);
    func_08852F00(arg1, 0);
}
