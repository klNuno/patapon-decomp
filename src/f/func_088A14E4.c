#include "common.h"

typedef struct { f32 unk_00[4]; } T;

void func_088A14E4(T *arg0, const T *arg1, const T *arg2) {
    f32 temp0;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    temp3 = arg1->unk_00[3];
    temp0 = arg2[2].unk_00[0] * arg1->unk_00[2] +
        (arg2[0].unk_00[0] * arg1->unk_00[0] + arg2[1].unk_00[0] * arg1->unk_00[1]);
    temp2 = arg2[2].unk_00[2] * arg1->unk_00[2] +
        (arg2[0].unk_00[2] * arg1->unk_00[0] + arg2[1].unk_00[2] * arg1->unk_00[1]);
    temp1 = arg2[2].unk_00[1] * arg1->unk_00[2] +
        (arg2[0].unk_00[1] * arg1->unk_00[0] + arg2[1].unk_00[1] * arg1->unk_00[1]);
    arg0->unk_00[0] = temp0;
    arg0->unk_00[1] = temp1;
    arg0->unk_00[2] = temp2;
    arg0->unk_00[3] = temp3;
}
