#include "common.h"

s32 *func_08868F6C(void *, s32, s32);
extern s32 D_089DD038[];

s32 func_08868BF8(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s1;
    s32 var_s0;
    s32 i;

    var_s1 = 0;
    var_s0 = 0xE00;
    if (arg2 != 0xF) {
        var_s1 = D_089DD038[arg2];
        var_s0 = var_s1 + 0x100;
    }
    if (arg1 != 0) {
        return -1;
    }
    for (i = var_s1; i < var_s0; i++) {
        if (func_08868F6C(arg0, arg2, i - var_s1) == NULL) {
            return i;
        }
    }
    return -1;
}
