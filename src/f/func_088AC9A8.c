#include "common.h"

u32 func_088AC9A8(u16 *arg0, u16 *arg1) {
    s32 n;
    u32 i;
    u16 *p;
    u16 *out;
    u32 c;

    n = 0;
    i = 1;
    p = arg0 + 1;
    out = arg1;
    while ((c = *p) != 0 && c != 0x3E) {
        if (c != 0x20 && c != 0x8140 && c != 0x3C) {
            *out++ = c;
            n++;
        }
        if (i >= 0x180) {
            break;
        }
        p++;
        i++;
    }
    if (arg0[i] == 0x3E) {
        i++;
    }
    arg1[n] = 0;
    return i;
}
