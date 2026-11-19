#include "common.h"

extern u32 D_08A87FC8[];

u32 func_0885A680(void) {
    u32 temp = D_08A87FC8[0] + 1;
    D_08A87FC8[0] = temp;
    if (temp == 0x7FFFFFFF) {
        temp = 0;
        D_08A87FC8[0] = 0;
    }
    return temp;
}
