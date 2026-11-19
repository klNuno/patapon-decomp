#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} S;

void func_08865720(S *arg0, const S *arg1, const S *arg2) {
    f32 temp0 = arg1->unk_00 + arg2->unk_00;
    f32 temp1 = arg1->unk_04 + arg2->unk_04;

    arg0->unk_00 = temp0;
    arg0->unk_04 = temp1;
}
