#include "common.h"

extern s8 D_08AD87A0[];

s32 func_08913E04(void *arg0, s32 arg1) {
    if (arg1 & 1) {
        D_08AD87A0[0] = 1;
    }
    if (arg1 & 2) {
        D_08AD87A0[0] = 0;
    }
    return 0;
}
