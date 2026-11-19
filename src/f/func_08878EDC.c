#include "common.h"

s32 func_0897CD40(void *, s32);
s32 func_0887B74C(s32, s32, s32);
void func_0883C1F8(s32, s32, s32);
void func_0883C2B0(s32, f32);
void func_0883C5F4(s32, f32);
u64 func_089AB994(f32);
u64 func_089AC210(u32, u32, u64);
f32 func_089ACE68(u32, u32);

void func_08878EDC(s32 *arg0, char *arg1, s32 arg2, s32 arg3, f32 arg5, f32 arg6, f32 arg7, s32 arg4) {
    struct { s32 unk_00; } temp3;
    s32 temp0;
    s32 temp1;
    u64 temp2;
    union { u32 unk_00; f32 unk_04; } temp4;

    temp3.unk_00 = arg2;
    if (arg2 < 0) {
        *arg0 = -1;
        return;
    }

    temp0 = func_0887B74C(temp3.unk_00, arg3, ((func_0897CD40(&arg1[0x644], arg4) & 0x1F) + 1) << 16);
    if (temp0 >= 0) {
        temp1 = (s32)(128.0f * arg5);
        func_0883C1F8(temp0, temp1, temp1);
        temp4.unk_04 = 1.625f;
        temp2 = func_089AB994(arg6);
        temp2 = func_089AC210(0, temp4.unk_00, temp2);
        func_0883C2B0(temp0, func_089ACE68((u32)temp2, (u32)(temp2 >> 32)));
        func_0883C5F4(temp0, arg7);
    }
    *arg0 = temp0;
}
