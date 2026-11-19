#include "common.h"

void *func_08806A08(void *arg0, s32 arg1, const u8 *arg2) {
    *(volatile u8 *)arg0 = *arg2;
    *(s32 *)arg0 = arg1;
    return arg0;
}
