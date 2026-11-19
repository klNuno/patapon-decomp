#include "common.h"
s32 func_08827280(u32 *arg0, u32 arg1, u32 arg2, u32 *arg3, u32 *arg4) {
    u32 temp = ((*arg0 - arg1) / arg2) * arg2;
    u32 temp1 = (temp - 0x1C) & ~3U;
    *arg4 = temp;
    if ((u32)(arg0 + 7) < temp1) {
        *arg3 = temp1;
        return 1;
    }
    return 0;
}
