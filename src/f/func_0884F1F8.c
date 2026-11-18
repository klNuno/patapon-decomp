#include "common.h"

s32 *func_0885356C(void *, s32, s32, s32);
void func_0885369C(void *, s32);
u8 func_08852FB4(void *);
void func_08852D00(void *);
void func_08852C5C(void *, s32, s32);
void func_08852F00(void *, s32);

void func_0884F1F8(void *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 0, 4);

    func_0885369C(arg1, 0);
    func_0885369C(arg1, 1);
    if ((u8)(*a != 0) == func_08852FB4(arg1)) {
        func_08852D00(arg1);
        func_08852C5C(arg1, *b, 0);
    }
    func_08852F00(arg1, 0);
}
