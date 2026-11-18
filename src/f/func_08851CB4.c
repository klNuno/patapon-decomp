#include "common.h"

f32 func_0881A1E0(f32);
void func_08852F00(void *, s32);
s32 func_088533F8(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_08851CB4(void *arg0, void *arg1) {
    f32 *temp1;
    s32 *temp;
    f32 temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp1 = (f32 *)func_0885356C(arg1, 1, 1, 4);
    if ((u8)func_088533F8(arg1, 0) & 0x70) {
        temp2 = *(f32 *)temp;
    } else {
        temp2 = (f32)*temp;
    }
    *temp1 = func_0881A1E0(3.1415927f * (2.0f * temp2) / 360.0f);
    func_08852F00(arg1, 0);
}
