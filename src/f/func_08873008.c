#include "common.h"

typedef struct {
    u8 pad_00[0x151C];
    s32 unk_151C;
} T;

s32 func_08873008(const T *arg0)
{
    s32 temp = (s32)((u32)arg0->unk_151C + 1U);
    return 10 < temp ? 0 : (temp < 0 ? 10 : temp);
}
