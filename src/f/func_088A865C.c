#include "common.h"

typedef struct {
    f32 unk_00[4];
} V;

typedef struct {
    f32 unk_00;
    s32 unk_04;
    f32 unk_08;
    V unk_0C;
    f32 unk_1C;
} S;

typedef struct {
    u8 pad_00[0xC];
    S unk_0C;
} T;

void func_088A865C(T *arg0, const S *arg1)
{
    arg0->unk_0C.unk_00 = arg1->unk_00;
    arg0->unk_0C.unk_04 = arg1->unk_04;
    arg0->unk_0C.unk_08 = arg1->unk_08;
    arg0->unk_0C.unk_0C = arg1->unk_0C;
    arg0->unk_0C.unk_1C = arg1->unk_1C;
}
