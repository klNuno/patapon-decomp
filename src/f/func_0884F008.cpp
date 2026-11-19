#include "common.h"

extern "C" {
void func_08852C5C(void *, s32, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0885369C(void *, s32);

void func_0884F008(void *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 0, 4);
    func_0885369C(arg1, 0);
    func_08852C5C(arg1, *temp, 0);
    func_08852F00(arg1, 0);
}
}
