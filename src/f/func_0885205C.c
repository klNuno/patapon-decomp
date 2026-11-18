#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 func_088533F8(void *, s32);

void func_0885205C(void *arg0, void *arg1) {
    s32 *temp0 = func_0885356C(arg1, 0, 1, 4);
    s32 *temp1 = func_0885356C(arg1, 1, 1, 4);
    u32 *temp2 = (u32 *)func_0885356C(arg1, 2, 1, 4);
    u8 temp3 = func_088533F8(arg1, 0);
    u8 temp4 = func_088533F8(arg1, 1);

    if (temp3 & 0x70) {
        u32 i;
        f32 temp5;
        if (temp4 & 0x70) {
            temp5 = *(f32 *)temp1;
        } else {
            temp5 = (f32)*temp1;
        }
        i = 0;
        if (*temp2 != 0) {
            do {
                *(f32 *)temp0 = temp5;
                ++temp0;
            } while (++i < *temp2);
        }
    } else {
        u32 i;
        s32 temp6 = (temp4 & 0x70) ? (s32)*(f32 *)temp1 : *temp1;
        f32 temp5;
        temp5 = (f32)temp6;
        i = 0;
        if (*temp2 != 0) {
            do {
                *temp0++ = (s32)temp5;
            } while (++i < *temp2);
        }
    }
    func_08852F00(arg1, 0);
}
