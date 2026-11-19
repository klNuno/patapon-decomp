#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} U;

typedef struct {
    U unk_00;
    U unk_08;
} T;

void func_08883054(T *arg0, const U *arg1, const U *arg2)
{
    f32 a;
    f32 b;
    f32 c;
    f32 d;

    b = arg2->unk_04;
    c = arg1->unk_04;
    c = c < b ? c : b;
    d = arg2->unk_00;
    a = arg1->unk_00;
    a = a < d ? a : d;
    arg0->unk_00.unk_00 = a;
    arg0->unk_00.unk_04 = c;
    c = arg2->unk_04;
    a = arg1->unk_04;
    c = a < c ? c : a;
    d = arg2->unk_00;
    a = arg1->unk_00;
    d = a < d ? d : a;
    arg0->unk_08.unk_00 = d;
    arg0->unk_08.unk_04 = c;
}
