#include "common.h"
extern "C" {
struct S {};
s32 func_08811BE4(s32 arg0, s32 arg1, S arg2);
s32 func_08811BC8(s32 arg0, s32 arg1) {
    S temp;
    return func_08811BE4(arg0, arg1, temp);
}
}
