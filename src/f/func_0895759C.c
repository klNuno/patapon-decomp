#include "common.h"

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_0897A064(s32 *, s32, s32);
void func_08957630(s32, s32, s32, s32, f32, f32);

void func_0895759C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 temp;
    func_0897A064(&temp, func_089B53D8(func_088586E8()) + 0xBB8, arg2);
    func_08957630(arg0, arg1, temp, arg3, arg4, arg5);
}
