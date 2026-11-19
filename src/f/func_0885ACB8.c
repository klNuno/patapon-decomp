#include "common.h"

s32 func_0885AB7C(s32, s32, s32);

s32 func_0885ACB8(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    if (arg1 >= 16U) return 0;
    arg0 = ((s32 *)arg0)[arg1];
    if (arg0 == 0) return 0;
    return arg2 == -1 ? arg0 : func_0885AB7C(arg0, arg2, arg3);
}
