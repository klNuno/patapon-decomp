#include "common.h"

extern "C" {
typedef struct {
    s32 unk_00;
    u32 unk_04;
} Obj_088103EC;

s32 func_0880F664(Obj_088103EC *, u32, s32 *, s8);

struct S { s8 unk_00; };

s32 func_088104C8(Obj_088103EC *arg0, u32 arg1)
{
    s32 temp0;
    S temp1 = { 0 };
    return func_0880F664(arg0, arg1, &temp0, temp1.unk_00);
}
}
