#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 func_088533F8(char *, s32);
f32 func_08819D88(f32);

void func_08851D78(void *arg0, void *arg1) {
    s32 *temp;
    f32 *temp2;
    f32 temp3;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = (f32 *)func_0885356C(arg1, 1, 1, 4);
    if ((func_088533F8((char *)arg1, 0) & 0x70) != 0) {
        temp3 = *(f32 *)temp;
    } else {
        temp3 = (f32)*temp;
    }
    *temp2 = func_08819D88((3.1415927f * (2.0f * temp3)) / 360.0f);
    func_08852F00(arg1, 0);
}
