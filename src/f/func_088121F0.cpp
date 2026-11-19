#include "common.h"
extern "C" {
struct T { s8 unk_00; };
void func_08812FFC(void *, s32, s8);

static inline void func_088121F0_inline(void *arg0, s32 arg1, const T &arg2) {
    func_08812FFC(arg0, arg1, arg2.unk_00);
}

void func_088121F0(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    T temp = { arg3 };
    func_088121F0_inline(arg0, arg2, temp);
}
}
