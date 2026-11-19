#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[4];
    u32 unk_04;
} S;

void func_0880DE9C(S *, u32);
void func_088103EC(S *, u32, s8);

struct T {};

static inline s8 func_0880DE54_inline(s32 arg0, const T &) {
    return (s8)arg0;
}

void func_0880DE54(S *arg0, u32 arg1, s32 arg2) {
    u32 temp = arg0->unk_04;
    if (temp < arg1) {
        func_088103EC(arg0, arg1 - temp, func_0880DE54_inline(arg2, T()));
    } else if (arg1 < temp) {
        func_0880DE9C(arg0, temp - arg1);
    }
}
}
