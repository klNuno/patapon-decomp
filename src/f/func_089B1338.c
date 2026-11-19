#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} S;

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} T;

void func_089B1338(S *arg0, const T *arg1) {
    f32 temp0 = arg1->unk_10 + arg1->unk_18;
    f32 temp1 = arg1->unk_14 + arg1->unk_1C;

    arg0->unk_00 = temp0;
    arg0->unk_04 = temp1;
}
