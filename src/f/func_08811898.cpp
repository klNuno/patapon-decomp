#include "common.h"
extern "C" {
struct S {};
s32 func_088118B4(s32 arg0, s32 arg1, S arg2);
s32 func_08811898(s32 arg0, s32 arg1) {
    S temp;
    return func_088118B4(arg0, arg1, temp);
}
}
