#include "common.h"

s32 func_0880F104(void *arg0, void *arg1, s8 *arg2, s8 *arg3, s8 **arg4, s8 *arg5, s8 *arg6, s8 **arg7) {
    s8 *temp;

    *arg4 = arg2;
    *arg7 = arg5;
    while ((temp = *arg4) < arg3 && *arg7 < arg6 - 3) {
        (*arg7)[0] = temp[0];
        (*arg7)[1] = temp[1];
        (*arg7)[2] = temp[2];
        (*arg7)[3] = temp[3];
        *arg4 += 4;
        *arg7 += 4;
    }
    if (temp < arg3) {
        return 1;
    }
    return 0;
}
