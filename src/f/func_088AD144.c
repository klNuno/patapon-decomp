#include "common.h"

s32 *func_088AD144(s32 *arg0, s32 *arg1, const s32 *arg2)
{
    s32 temp0 = *arg1;
    s32 temp1 = 0x13;
    arg1 = arg0 + 1;
    *arg0 = temp0;
    do {
        *arg1 = *arg2;
        arg2++;
        arg1++;
    } while (--temp1 > 0);
    return arg0;
}
