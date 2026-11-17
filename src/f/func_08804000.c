#include "common.h"

void func_08804000(void *arg0, void (*arg1)(void *, s16), u32 arg2, u32 arg3) {
    u8 *p;

    for (p = (u8 *)arg0 + arg2 * arg3; arg3 > 0; arg3--) {
        p -= arg2;
        arg1(p, -1);
    }
}
