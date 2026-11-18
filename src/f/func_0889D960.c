typedef int s32;

extern s32 func_0889C96C(s32, s32, s32, s32, s32, s32);
extern s32 func_0889D9C8(s32);

s32 func_0889D960(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    temp_s0 = func_0889C96C(arg0, arg0, arg1, arg2, arg3, arg4) & 0xFF;
    if (temp_s0 != 0) {
        *(s32 *)(arg0 + 0x40C) = arg2;
        func_0889D9C8(arg0);
    }
    return temp_s0;
}
