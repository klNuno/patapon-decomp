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
    T *unk_08;
} U;

void func_0885258C(S *arg0, const U *arg1, s32 arg2) {
    *arg0 = arg1->unk_08[arg2].unk_04;
}
