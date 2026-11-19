#include "common.h"
extern "C" {
struct S {};
s32 func_0880FEE0(s32 arg0, s32 arg1, S arg2);
s32 func_0880FEC4(s32 arg0, s32 arg1) {
    S temp;
    return func_0880FEE0(arg0, arg1, temp);
}
}
