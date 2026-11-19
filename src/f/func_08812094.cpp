#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
    u8 pad_08[8];
    s32 unk_10;
} S;

typedef struct {
    s8 unk_00;
} T;

extern "C" {
void func_088120B4(S *, s32 *, s32 *, s8);

void func_08812094(S *arg0, s32 *arg1, s32 *arg2)
{
    T temp = { 0 };
    func_088120B4(arg0, arg1, arg2, temp.unk_00);
}
}
