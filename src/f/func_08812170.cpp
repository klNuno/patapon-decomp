#include "common.h"

extern "C" {
void func_0881F5C0(void *, s32, s32);

struct T {
    s32 *unk_00;
    s32 unk_04;
    u8 pad_08[8];
    s32 unk_10;
};

class E {};

static inline void func_08812170_inline(T *arg0, s32 arg1, const E &) {
    s32 n = arg0->unk_04;
    s32 i = arg0->unk_10;
    s32 *p = arg0->unk_00;
    func_0881F5C0(p + i + n, 0, arg1 * 4);
    arg0->unk_04 += arg1;
}

void func_08812170(T *arg0, s32 arg1) {
    s32 temp = arg1;
    func_08812170_inline(arg0, temp, E());
}
}
