#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} T;

typedef struct {
    u8 pad_00[0x1920];
    T unk_1920;
} U;

void func_0886575C(s32, s32, s32);

void func_089B295C(U *arg0, const T *arg1, s32 arg2)
{
    arg0->unk_1920.unk_00 = arg1->unk_00;
    arg0->unk_1920.unk_04 = arg1->unk_04;
    arg0->unk_1920.unk_08 = arg1->unk_08;
    arg0->unk_1920.unk_0C = arg1->unk_0C;
    func_0886575C(0, arg2, 1);
}
