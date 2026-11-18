#include "common.h"

void func_08852C5C(void *, s32, s32);
void func_08852D00(void *);
void func_08852F00(void *, s32);
u8 func_088533F8(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0885369C(void *, s32);

void func_08850CF8(void *arg0, void *arg1) {
    s32 *a, *b, *c;
    u8 x, y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 0, 4);
    x = func_088533F8(arg1, 0);
    y = func_088533F8(arg1, 1);
    func_0885369C(arg1, 0);
    func_0885369C(arg1, 1);
    func_0885369C(arg1, 2);
    if (x & 0x70) {
        f32 temp = (y & 0x70) ? *(f32 *)b : (f32)*b;
        if (*(f32 *)a >= temp) {
            func_08852D00(arg1);
            func_08852C5C(arg1, *c, 0);
        }
    } else {
        s32 temp = *a;
        s32 temp2 = (y & 0x70) ? (s32)*(f32 *)b : *b;
        if (temp >= temp2) {
            func_08852D00(arg1);
            func_08852C5C(arg1, *c, 0);
        }
    }
    func_08852F00(arg1, 0);
}
