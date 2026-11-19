#include "common.h"

extern u8 D_08A47A04[];

typedef struct {
    void *unk_00;
    u8 unk_04;
    u8 pad_05[3];
    u8 *unk_08;
    void *unk_0C;
    void *unk_10;
    void *unk_14;
    s32 unk_18;
} T;

T *func_0895EFB8(T *arg0, void *arg1)
{
    arg0->unk_08 = D_08A47A04;
    arg0->unk_00 = arg1;
    arg0->unk_04 = 0;
    arg0->unk_0C = NULL;
    arg0->unk_10 = NULL;
    arg0->unk_14 = NULL;
    arg0->unk_18 = 0;
    return arg0;
}
