#include "common.h"

u8 *func_08804778(u8 *arg0, u32 *arg1);

u8 *func_08805DC0(s8 *arg0)
{
    u32 temp;
    s32 flag = *arg0 & 0x40;
    u8 *p = func_08804778((u8 *)arg0 + 1, &temp);
    p = func_08804778(p, &temp);
    if (flag != 0) {
        p = func_08804778(p, &temp);
    }
    return p;
}
