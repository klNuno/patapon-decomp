#include "common.h"

extern "C" {
struct V;
s32 func_08812E24(V *, s32);

struct T {};

static inline void func_08812878_00(s32 *arg0, s32 arg1, const T &)
{
    *arg0 = arg1;
}

s32 func_08812878(V *arg0, s32 arg1, s32 *arg2)
{
    func_08812878_00(arg2, func_08812E24(arg0, arg1), T());
    return 0;
}
}
