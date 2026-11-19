#include "common.h"

extern u8 D_08A47C20[];

typedef struct {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} T;

T *func_08966CD4(T *arg0)
{
    arg0->unk_1C = D_08A47C20;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = NULL;
    arg0->unk_0C = 0;
    return arg0;
}
