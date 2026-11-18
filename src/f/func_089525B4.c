#include "common.h"

u32 func_0887AFCC(s32);
s32 func_0887AFD4(s32);
u32 func_0887A6EC(s32, u32);

s32 func_089525B4(s32 *arg0) {
    u32 half;
    u32 b;
    u32 a;
    u32 *p;

    half = func_0887AFCC(*arg0) >> 1;
    a = func_0887A6EC(*arg0, func_0887AFCC(*arg0) >> 1);
    b = func_0887A6EC(*arg0, func_0887AFCC(*arg0) - func_0887AFD4(*arg0));
    p = (b < a) ? &a : &b;
    return *p - func_0887A6EC(*arg0, half);
}
