#include "common.h"

s32 func_089A8D10(s32, s32);

s32 func_089A8C5C(s32 *arg0, u32 arg1) {
    s32 id;

    switch (arg1) {
    case 0:
        id = 0x20042;
        break;
    case 1:
        id = 0x20043;
        break;
    case 2:
        id = 0x20044;
        break;
    case 3:
        id = 0x20047;
        break;
    case 4:
        id = 0x20045;
        break;
    case 5:
        id = 0x20048;
        break;
    case 6:
        id = 0x20046;
        break;
    case 7:
        id = 0x20049;
        break;
    case 8:
        id = 0x2004A;
        break;
    default:
        id = 0x20044;
        break;
    }
    return func_089A8D10(arg0[(id >> 16) & 0xFFFF], id & 0xFFFF);
}
