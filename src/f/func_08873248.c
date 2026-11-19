#include "common.h"

typedef struct {
    u8 pad_00[0x151C];
    s32 unk_151C;
} S;

s32 func_08873248(S *arg0)
{
    s32 temp = arg0->unk_151C + 1;
    if (temp > 10) {
        return 0;
    }
    if (temp < 0) {
        return 10;
    }
    return temp;
}
