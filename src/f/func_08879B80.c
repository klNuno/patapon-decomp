#include "common.h"

typedef struct {
    s32 unk_00;
    u32 unk_04;
} Unk;

s32 func_08879B80(Unk *arg0)
{
    u32 temp2;
    s32 temp = arg0->unk_00;
    if (temp <= 0) {
        return -1;
    }
    temp2 = arg0->unk_04;
    if (temp2 > 2U) {
        temp2 = 2;
    }
    return (temp - 1) + temp2 * 4;
}
