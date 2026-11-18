#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0885369C(void *, s32);
u8 func_088533F8(char *arg0, s32 arg1);

void func_0884F3C0(void *arg0, char *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);
    u8 x = (u8)func_088533F8(arg1, 0);
    u8 y = (u8)func_088533F8(arg1, 1);

    func_0885369C(arg1, 0);
    func_0885369C(arg1, 1);
    if (x & 0x70) {
        f32 t = (y & 0x70) ? *(f32 *)b : (f32)*b;
        *(f32 *)a += t;
    } else {
        s32 t = (y & 0x70) ? (s32)*(f32 *)b : *b;
        *a += t;
    }
    func_0885369C(arg1, 0);
    func_08852F00(arg1, 0);
}
