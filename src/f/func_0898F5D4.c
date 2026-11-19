#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} T;

typedef struct {
    s32 unk_00;
    T unk_04;
} U;

U *func_0898F5D4(U *arg0, const U *arg1)
{
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    return arg0;
}
