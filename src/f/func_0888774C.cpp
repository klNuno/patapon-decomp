#include "common.h"
extern "C" {
struct T0 { s8 unk_00; };
struct T1 { u8 pad_00[4]; void *unk_04; };
void func_08887820(T1 *, void *, s8);

static inline void func_0888774C_inline(T1 *arg0, void *arg1, const T0 &arg2) {
    func_08887820(arg0, arg1, arg2.unk_00);
}

void func_0888774C(T1 *arg0) {
    T0 temp = { 0 };
    func_0888774C_inline(arg0, arg0->unk_04, temp);
}
}
