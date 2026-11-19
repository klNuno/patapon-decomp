#include "common.h"

extern f32 D_089E7668[];

typedef struct {
    u8 pad_00[0x28];
    f32 unk_28;
    f32 unk_2C;
} S;

void func_089334A4(S *arg0, const f32 *arg1, s32 arg2)
{
    f32 temp = D_089E7668[arg2];
    f32 temp0 = arg1[0] * temp;
    f32 temp1 = arg1[1] * temp;
    arg0->unk_28 = temp0;
    arg0->unk_2C = temp1;
}
