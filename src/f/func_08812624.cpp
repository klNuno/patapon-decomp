#include "common.h"

extern "C" {
typedef struct T088123FC T088123FC;

u32 func_08812B1C(T088123FC *, u32);

struct E {};

static inline u32 func_08812624_inline(T088123FC *arg0, u32 arg1, const E &) {
    return func_08812B1C(arg0, arg1);
}

s32 func_08812624(T088123FC *arg0, u32 arg1, u32 *arg2) {
    *arg2 = func_08812624_inline(arg0, arg1, E());
    return 0;
}
}
