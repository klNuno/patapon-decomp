#include "common.h"

extern u8 *D_08AD1F14[];
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_089A8B5C(u8 *, s32, s32);
void func_08945674(s32, s32, f32);

void func_088EAFD0(void *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;
    s32 *temp3;
    u8 *temp4;
    s32 temp5;
    s32 temp6;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    temp3 = func_0885356C(arg1, 2, 1, 4);
    func_08852F00(arg1, 0);
    temp4 = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    temp5 = *temp;
    temp6 = func_089A8B5C(temp4 + 0x2460, 2, *temp2);
    func_08945674(temp5, temp6, (f32)*temp3);
}
