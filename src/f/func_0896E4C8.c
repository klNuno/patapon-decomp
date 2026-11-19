#include "common.h"

typedef struct {
    u8 pad_00[0xBF];
    u8 unk_BF;
} T2;

typedef struct {
    u8 pad_00[4];
    T2 *unk_04;
} T;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} T1;

T *func_08852FFC(s32);
s32 func_08853004(s32);
f32 *func_0884EBB0(s32, s32);

s32 func_0896E4C8(T1 *arg0)
{
    T *temp = func_08852FFC(arg0->unk_04);
    s32 temp1 = func_08853004(arg0->unk_04);

    if (((temp->unk_04->unk_BF >> 3) & 1) == 0) {
        return 0;
    }
    if (*func_0884EBB0(temp1, 0x10) >= 1.75f) {
        return 1;
    }
    return 0;
}
