#include "common.h"

extern s32 *func_088087B4(s32 *, s32 *);

s32 func_0880F27C(void *arg0, void *arg1, u8 *arg2, u8 *arg3, s32 arg4) {
    s32 temp0;
    s32 temp1;

    temp1 = arg4;
    temp0 = ((u32)arg3 - (u32)arg2) >> 2;
    return *func_088087B4(&temp0, &temp1) * 4;
}
