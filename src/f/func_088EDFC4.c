#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} S;

typedef struct {
    u8 pad_00[4];
    S unk_04;
    u8 pad_10[4];
} T;

typedef struct {
    u8 pad_00[8];
    const T *unk_08;
} U;

void func_088EDFC4(S *arg0, const U *arg1, s32 arg2)
{
    u32 temp0;
    const T *temp;
    arg1 = (const U *)arg1->unk_08;
    temp0 = (u32)arg2 * sizeof(T);
    temp0 += (u32)arg1;
    temp = (const T *)temp0;
    *arg0 = temp->unk_04;
}
