#include "common.h"

s32 func_089A8D10(s32, s32);

s32 func_089A8B74(s32 *arg0, u32 arg1) {
    return func_089A8D10(arg0[(arg1 >> 16) & 0xFFFF], arg1 & 0xFFFF);
}
