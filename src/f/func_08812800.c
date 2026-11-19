#include "common.h"
extern s32 func_0881F280(s32, s32, s32);

s32 func_08812800(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = ((arg1 - arg0) / 16) * 16;
    arg2 -= temp;
    func_0881F280(arg2, arg0, temp);
    return arg2;
}
