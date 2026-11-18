#include "common.h"

f32 func_0885606C(f32);
f32 func_08856234(f32);

f32 *func_08877A80(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    f32 temp2;
    f32 temp3;

    arg4 *= 0.5f;
    temp2 = func_08856234(arg4);
    temp3 = func_0885606C(arg4);

    arg0[0] = temp2 * arg1;
    arg0[1] = temp2 * arg2;
    arg0[2] = temp2 * arg3;
    arg0[3] = temp3;
    return arg0;
}
