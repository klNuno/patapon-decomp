#include "common.h"

typedef struct {
    u32 unk_00;
    s32 unk_04;
} T;

extern s32 func_0880F484(s32, s32, s32, s32);

s32 func_088860F4(T *arg0, s32 arg1)
{
    s32 temp;
    if (arg0->unk_00 & 1) {
        temp = arg0->unk_04;
    } else {
        temp = ((u32)*(const u8 *)&arg0->unk_00 << 24) >> 25;
    }
    return func_0880F484((s32)arg0, temp, 0, arg1);
}
