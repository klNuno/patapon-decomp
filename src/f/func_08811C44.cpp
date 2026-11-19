#include "common.h"

extern "C" {
s32 func_08811C6C(s32, s32);

s32 func_08811C44(s32 arg0, s32 arg1, s8 arg2)
{
    struct { s32 unk_00; u8 pad_04[4]; } temp0;
    s32 temp1;
    temp1 = arg0;
    temp0.unk_00 = arg1;
    return func_08811C6C((s32)&temp0.unk_00, (s32)&temp1);
}
}
