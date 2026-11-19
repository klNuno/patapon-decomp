#include "common.h"
extern u32 D_089DE0F0[];

u32 func_0888AFAC(const u8 *arg0) {
    u32 temp = ~0U;
    u8 temp1 = *arg0;
    if (temp1 != 0) {
        do {
            temp = (temp >> 8) ^ D_089DE0F0[(u8)(temp ^ temp1)];
            arg0++;
            temp1 = *arg0;
        } while (temp1 != 0);
    }
    return ~temp;
}
