typedef int s32;

extern s32 func_0885AB7C(s32, s32, s32);

s32 func_08899DC0(char *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg2 < 0) {
        return 0;
    }
    temp_v0 = func_0885AB7C(*(s32 *)(arg0 + 0x3E0), 0, arg2);
    if ((temp_v0 + 0x40) != 0) {
        return ((s32 *)((char *)temp_v0 + 0x40))[arg1] != 0;
    }
    return 0;
}
