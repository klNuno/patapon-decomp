#include "common.h"

s32 func_088690F8(u8 *, s32, s32, s32, s32, s32);
s32 func_0896CE18(void *, s32, s32, s32);
extern s32 D_089F8DA8[];
extern s32 D_089F8EDC[];

s32 func_08869030(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg3 == 0) {
        return 0;
    }
    return func_088690F8(arg0, func_0896CE18((void *)func_0896CE18(arg0 + 0xEA8D0, D_089F8DA8[arg1], 0, 1), D_089F8EDC[arg2], 0, 1), arg3, arg2, arg4, arg5);
}
