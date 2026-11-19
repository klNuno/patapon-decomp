#include "common.h"
typedef struct { f32 unk_00; f32 unk_04; } T0;

void func_088656E4(T0 *arg0, const T0 *arg1, const T0 *arg2) {
    f32 temp0 = arg1->unk_00 - arg2->unk_00;
    f32 temp1 = arg1->unk_04 - arg2->unk_04;
    arg0->unk_00 = temp0;
    arg0->unk_04 = temp1;
}
