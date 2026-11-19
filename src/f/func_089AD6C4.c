#include "common.h"

extern u8 D_08A4879C[];
extern u8 D_08A487B4[];

typedef struct {
    u8 *volatile unk_00;
    s32 unk_04;
} S;

S *func_089AD6C4(S *arg0, s32 arg1)
{
    arg0->unk_00 = D_08A487B4;
    arg0->unk_00 = D_08A4879C;
    arg0->unk_04 = arg1;
    return arg0;
}
