#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} T;

typedef struct {
    u8 pad_00[4];
    T unk_04;
    u8 pad_10[4];
} U;

typedef struct {
    u8 pad_00[8];
    U *unk_08;
} V;

void func_089921C8(T *arg0, const V *arg1, s32 arg2)
{
    *arg0 = arg1->unk_08[arg2].unk_04;
}
