#include "common.h"

extern s32 func_088586E8(void);
extern u32 func_089B5464(s32);

s32 func_0897333C(void) {
    switch (func_089B5464(func_088586E8()) % 6) {
    case 0:
        return 0x3F;
    case 1:
        return 0x40;
    case 2:
        return 0x41;
    case 3:
        return 0x42;
    case 4:
        return 0x43;
    case 5:
    default:
        return 0x44;
    }
}
