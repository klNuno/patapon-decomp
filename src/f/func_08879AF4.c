#include "common.h"

extern s32 func_0887ED88(s32, s32);

s32 func_08879AF4(s32 arg0) {
    s32 var_s0;

    var_s0 = -1;
    if (func_0887ED88(arg0, 0x2000) != 0) {
        var_s0 = 1;
    }
    if (func_0887ED88(arg0, 0x4000) != 0) {
        var_s0 = 2;
    }
    if (func_0887ED88(arg0, 0x1000) != 0) {
        var_s0 = 4;
    }
    if (func_0887ED88(arg0, 0x8000) != 0) {
        var_s0 = 3;
    }
    return var_s0;
}
