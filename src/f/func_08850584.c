#include "common.h"

void func_08852C5C(void *, s32, s32);
void func_08852F00(void *, s32);
u8 func_088533F8(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0885369C(void *, s32);

void func_08850584(void *arg0, void *arg1) {
    s32 *temp, *temp2, *temp3;
    u8 temp4, temp5;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    temp3 = func_0885356C(arg1, 2, 0, 4);
    temp4 = func_088533F8(arg1, 0);
    temp5 = func_088533F8(arg1, 1);
    func_0885369C(arg1, 0);
    func_0885369C(arg1, 1);
    func_0885369C(arg1, 2);
    if (temp4 & 0x70) {
        f32 temp6 = (temp5 & 0x70) ? *(f32 *)temp2 : (f32)*temp2;
        if (*(f32 *)temp > temp6) {
            func_08852C5C(arg1, *temp3, 0);
        }
    } else {
        s32 temp6 = *temp;
        s32 temp7 = (temp5 & 0x70) ? (s32)*(f32 *)temp2 : *temp2;
        if (temp6 > temp7) {
            func_08852C5C(arg1, *temp3, 0);
        }
    }
    func_08852F00(arg1, 0);
}
