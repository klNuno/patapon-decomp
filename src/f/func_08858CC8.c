#include "common.h"

#pragma divbyzerocheck on

u32 func_08858CC8(u32 arg0, u32 arg1)
{
    return arg1 * ((arg0 + arg1 - 1) / arg1);
}
