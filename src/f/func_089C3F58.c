#include "common.h"

s32 func_089C3F58(u32 arg0, s32 arg1)
{
    s32 temp = -1;

    switch (arg0) {
    case 1:
        return arg1;
    case 2:
        return arg1 + 1;
    case 3:
        switch (arg1) {
        case 0:
            return 0;
        case 1:
            return 2;
        default:
            break;
        }
        break;
    case 4:
        return arg1;
    case 5:
        return 2;
    case 6:
        return 1;
    case 7:
        temp = 0;
        break;
    case 0:
    default:
        break;
    }
    return temp;
}
