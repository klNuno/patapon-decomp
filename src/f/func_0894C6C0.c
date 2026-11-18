#include "common.h"

extern f32 D_089E9480[];

u32 func_0887AFCC(s32);
u32 func_0887A6EC(s32, u32);
s32 func_0887AEC0(s32);

f32 func_0894C6C0(s32 *arg0) {
    s32 temp = *arg0;
    u32 temp2 = func_0887AFCC(temp);
    f32 temp3 = D_089E9480[0] * (f32)(temp2 * func_0887AEC0(temp));

    return 1.0f / (f32)func_0887A6EC(*arg0, (u32)temp3);
}
