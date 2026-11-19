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
} S;
typedef struct {
    u8 pad_00[8];
    S *unk_08;
} R;

void func_08922F60(T *arg0, const R *arg1, s32 arg2) {
    *arg0 = arg1->unk_08[arg2].unk_04;
}
