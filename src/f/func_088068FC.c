typedef int s32;

extern s32 func_08806934(s32);

s32 func_088068FC(s32 arg0) {
    s32 temp_s0;

    temp_s0 = *(s32 *)(func_08806934(arg0));
    *(s32 *)(func_08806934(arg0)) = 0;
    return temp_s0;
}
