#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[0x18];
    u8 unk_1C;
} T;

s32 func_0882723C(T *arg0, u32 arg1, u32 arg2, u32 *arg3, u32 *arg4) {
    u32 temp = (u32)&arg0->unk_1C + arg2;
    u32 val = (temp - 1) / arg2;
    u32 mask = ~3U;
    temp = arg2 * val;
    *arg4 = temp;
    temp += arg1;
    temp = (temp + 3) & mask;
    *arg3 = temp;
    return temp + 0x1C < arg0->unk_00;
}
