#include "common.h"

extern s32 func_088112F4(s32, s32, s32);
extern s32 func_08811320(s32, s32, s32);
extern s32 func_08811340(s32 *);

void func_0881128C(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp;
    s32 temp2;

    temp2 = arg2;
    temp = func_08811320(arg1, func_08811340(&temp2), arg3);
    func_088112F4(arg0, arg1, (s32)&temp);
}
