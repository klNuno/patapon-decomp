#include "common.h"

extern f32 D_089ED568[];

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
} S;

s32 func_089873F4(void *arg0, S *arg1)
{
    arg1->unk_30 = D_089ED568[0];
    arg1->unk_34 = D_089ED568[1];
    return 0;
}
