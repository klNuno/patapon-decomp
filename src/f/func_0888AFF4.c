#include "common.h"

extern u32 D_089DE0F0[];

u32 func_0888AFF4(u8 *arg0) {
    u32 temp;
    u32 temp2;

    temp2 = *arg0;
    temp = -1U;
    if (temp2 != 0) {
        do {
            temp = (temp >> 8) ^ D_089DE0F0[(u8)(temp ^ temp2)];
            temp2 = *++arg0;
        } while (temp2 != 0);
    }
    return ~temp;
}
