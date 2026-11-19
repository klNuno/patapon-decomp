#include "common.h"

extern s32 func_088063D4(s32, s32);
s32 func_088063DC(s32);
void func_0880618C(s32, s32);

void func_08806144(s32 arg0, s32 arg1)
{
    s32 temp = func_088063D4(func_088063DC(arg0), arg1);
    func_0880618C(arg0, temp);
}
