#include "common.h"

void func_08852C5C(void *, s32, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0885369C(void *, s32);
void func_08852D00(void *);

void func_08851184(void *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 0, 4);
    func_0885369C(arg1, 0);
    func_0885369C(arg1, 1);
    func_0885369C(arg1, 2);
    if (*a & *b) {
        func_08852D00(arg1);
        func_08852C5C(arg1, *c, 0);
    }
    func_08852F00(arg1, 0);
}
