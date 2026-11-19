#include "common.h"
typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} T0;

typedef struct {
    u8 pad_00[4];
    T0 unk_04;
    u8 pad_10[4];
} T1;

typedef struct {
    u8 pad_00[8];
    const T1 *unk_08;
} T2;

void func_08925154(T0 *arg0, const T2 *arg1, s32 arg2) {
    *arg0 = arg1->unk_08[arg2].unk_04;
}
