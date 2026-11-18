#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 func_088533F8(void *, s32);
void func_0885369C(void *, s32);

void func_0884F2B0(void *arg0, void *arg1) {
    s32 *temp0;
    s32 *temp1;
    u8 temp2;
    u8 temp3;

    temp0 = func_0885356C(arg1, 0, 1, 4);
    temp1 = func_0885356C(arg1, 1, 1, 4);
    temp2 = func_088533F8(arg1, 0);
    temp3 = func_088533F8(arg1, 1);
    func_0885369C(arg1, 0);
    func_0885369C(arg1, 1);
    if (temp2 & 0x70) {
        *(f32 *)temp0 = (temp3 & 0x70) ? *(f32 *)temp1 : (f32)*temp1;
    } else {
        *temp0 = (temp3 & 0x70) ? (s32)*(f32 *)temp1 : *temp1;
    }
    func_0885369C(arg1, 0);
    func_08852F00(arg1, 0);
}
