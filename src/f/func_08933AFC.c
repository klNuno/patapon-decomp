#include "common.h"


s32 func_088586E8(void);
u32 func_089B5464(s32);
extern f32 D_08A02E98[];
extern f32 D_08A02E94[];

f32 func_08933AFC(void) {
    f32 temp2 = 0.01f * (f32)(func_089B5464(func_088586E8()) % 100U);
    f32 temp3 = D_08A02E98[0];
    f32 temp4 = D_08A02E94[0];
    return temp3 + temp4 * temp2;
}

