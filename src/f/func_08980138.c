#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 *unk_08;
} Unk;

extern u8 D_08A480F0[];

Unk *func_08980138(Unk *arg0, s32 arg1, s32 arg2)
{
    arg0->unk_08 = D_08A480F0;
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    return arg0;
}
