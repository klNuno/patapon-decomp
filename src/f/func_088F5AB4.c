#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0A[2];
    s32 unk_0C;
    u8 pad_10[4];
    u8 unk_14[4];
} S0;

s32 func_088F5BA0(s32);
extern s32 func_0899288C(s32, s32);
f32 *func_08992A3C(void *, s32);

static inline s32 func_088F5AB4_1(s32 a, s32 b) {
    if (b < a) {
        return b;
    }
    return a < 0 ? 0 : a;
}

s32 func_088F5AB4(S0 *arg0, s32 arg1) {
    f32 *p;

    if (func_088F5BA0((s32)arg0) != 0) {
        return 0;
    }
    if (arg1 < 0) {
        arg0->unk_0C -= arg1;
    }
    if (arg0->unk_09 == 0) {
        arg0->unk_04 = func_088F5AB4_1(arg0->unk_04 + arg1, arg0->unk_00);
    }
    if (arg1 < 0) {
        arg0->unk_08 = 1;
    }
    if (arg0->unk_08 != 0) {
        p = func_08992A3C(arg0->unk_14, 1);
        if (p != NULL && *p > 0.0f) {
            func_0899288C((s32)arg0->unk_14, 1);
        }
    }
    return 1;
}
