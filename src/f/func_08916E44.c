#pragma divbyzerocheck on
#include "common.h"

s32 func_088586E8(void);
u32 func_089B5464(s32);

u32 func_08916E44(u32 arg0) {
    u32 buf[32];
    s32 n;
    u32 i;
    s32 j;
    u32 *p;
    u32 k;
    u32 t;

    n = 0;
    for (i = 0, p = buf; i < 32; i++) {
        if ((arg0 >> i) & 1) {
            *p++ = i;
            n++;
        }
    }
    if (n == 0) {
        return 0;
    }
    for (j = 0; j < n - 1; j++) {
        k = j + func_089B5464(func_088586E8()) % (n - j);
        t = buf[j];
        buf[j] = buf[k];
        buf[k] = t;
    }
    return buf[0];
}
