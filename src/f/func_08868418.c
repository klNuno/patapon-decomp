#include "common.h"

extern u8 D_08A44BE0[];

typedef struct {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} T;

T *func_08868418(T *arg0)
{
    arg0->unk_1C = D_08A44BE0;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = NULL;
    arg0->unk_0C = 0;
    return arg0;
}
