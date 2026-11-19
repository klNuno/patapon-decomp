#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} T;

s32 func_08853004(s32);
f32 *func_0884EBB0(s32, s32);

s32 func_0896E69C(T *arg0) {
    s32 temp = func_08853004(arg0->unk_04);
    f32 val;
    s32 ret;
    if (*func_0884EBB0(temp, 0x21) >= 3.5f) {
        return 1;
    }
    val = *func_0884EBB0(temp, 0x10);
    ret = 1;
    if (!(val >= 1.75f)) {
        ret = 0;
    }
    return ret;
}
