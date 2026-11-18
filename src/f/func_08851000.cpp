#include "common.h"

extern "C" {

void func_08852C5C(void *, s32, s32);
void func_08852D00(void *);
void func_08852F00(void *, s32);
u8 func_088533F8(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0885369C(void *, s32);

void func_08851000(void *arg0, void *arg1) {
    u8 y;
    s32 *c;
    s32 *b;
    s32 *a;
    u8 x;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 0, 4);
    x = func_088533F8(arg1, 0);
    y = func_088533F8(arg1, 1);
    func_0885369C(arg1, 0);
    func_0885369C(arg1, 1);
    func_0885369C(arg1, 2);
    if (x & 0x70) {
        f32 v;
        if (y & 0x70) {
            v = *(f32 *)b;
        } else {
            v = (f32)*b;
        }
        if (*(f32 *)a > v) {
            func_08852D00(arg1);
            func_08852C5C(arg1, *c, 0);
        }
    } else {
        s32 v;
        s32 n = *a;
        if (y & 0x70) {
            v = (s32)*(f32 *)b;
        } else {
            v = *b;
        }
        if (v < n) {
            func_08852D00(arg1);
            func_08852C5C(arg1, *c, 0);
        }
    }
    func_08852F00(arg1, 0);
}

}
