typedef int s32;

extern s32 func_08809754(s32);
extern s32 func_08809F4C(s32);

s32 func_08809F54(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_08809F4C(arg0);
    return temp_s0 - func_08809754(arg0);
}
