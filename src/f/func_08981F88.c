typedef int s32;

extern s32 func_08981FC4(s32, s32);
extern s32 func_08981FCC(s32);

s32 func_08981F88(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_08981FC4(arg0, func_08981FCC(arg0));
    if (temp_v0 != 0) {
        return *(s32 *)(temp_v0 + 0x44);
    }
    return 0;
}
