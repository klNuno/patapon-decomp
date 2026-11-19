#include "common.h"

extern s32 func_08810BC0(s32, s32, s32);
extern s32 func_08810BEC(s32, s32, s32);
extern s32 func_08810C0C(s32 *);

void func_08810B58(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp1;
    s32 temp0 = arg2;
    temp1 = func_08810BEC(arg1, func_08810C0C(&temp0), arg3);
    func_08810BC0(arg0, arg1, (s32) &temp1);
}
