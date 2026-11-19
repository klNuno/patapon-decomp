#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    s32 *unk_0C;
    s32 unk_10;
    u8 pad_14[0x14];
} T;

typedef struct {
    u8 pad_00[0x28];
    T unk_28[18];
} U;

T *func_0899F148(U *arg0, s32 arg1, s32 arg2)
{
    return &arg0->unk_28[arg2 + arg1 * 3];
}
