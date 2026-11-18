typedef int s32;

extern s32 func_0880F5B4(s32);

s32 func_0880F57C(s32 arg0) {
    s32 temp_s0;

    temp_s0 = *(s32 *)(func_0880F5B4(arg0));
    *(s32 *)(func_0880F5B4(arg0)) = 0;
    return temp_s0;
}
