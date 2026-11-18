#include "common.h"

extern u8 *D_08AD1F14[];

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0891AA38(s32, s32, s32);
s32 func_089A8B5C(u8 *, s32, s32);

void func_088EAF30(void *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    u8 *p;
    s32 temp;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    func_08852F00(arg1, 0);
    p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    temp = *a;
    func_0891AA38(temp, func_089A8B5C(p + 0x2460, 2, *b), 0x10);
}
