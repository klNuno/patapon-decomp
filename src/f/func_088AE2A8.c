#include "common.h"

s32 func_088AE2A8(u16 *arg0) {
    u16 c;
    u16 n;
    u32 i;
    s32 sep;

    n = 0;
    i = 0;
    c = *arg0;
    while (c != 0) {
        sep = c == 0xA || c == 0xD || c == 0x2F;
        if (sep) {
            n++;
            if (c == 0xD && arg0[1] == 0xA) {
                arg0++;
            }
            if (arg0[1] == 0) {
                n--;
                break;
            }
        }
        if (i >= 0x180) {
            return 0;
        }
        arg0++;
        c = *arg0;
        i++;
    }
    return n;
}
