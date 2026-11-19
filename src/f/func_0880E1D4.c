#include "common.h"

typedef struct {
    u8 *unk_00;
    s32 unk_04;
} T;

extern u8 D_08A44720[];

T *func_0880E1D4(T *arg0, s32 arg1)
{
    arg0->unk_00 = D_08A44720;
    arg0->unk_04 = arg1;
    return arg0;
}
