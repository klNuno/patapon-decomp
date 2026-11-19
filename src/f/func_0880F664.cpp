#include "common.h"
extern "C" {
struct O08811F2C;
struct T0 {};
s32 func_088122B0(O08811F2C *, s32);

static inline s32 func_0880F664_inline(O08811F2C *arg0, s32 arg1, s32 *arg2, const T0 &) {
    *arg2 = func_088122B0(arg0, arg1);
    return 0;
}

s32 func_0880F664(O08811F2C *arg0, s32 arg1, s32 *arg2) {
    return func_0880F664_inline(arg0, arg1, arg2, T0());
}
}
