#include "common.h"

extern u8 D_08A45078[];

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} S;

S *func_08870E2C(S *arg0)
{
    arg0->unk_1C = D_08A45078;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    return arg0;
}
