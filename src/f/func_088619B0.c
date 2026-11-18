typedef int s32;

s32 func_088619B0(char *arg0, s32 arg1) {
    if (arg1 < 0) {
        return *(s32 *)(arg0 + 0x54);
    }
    return *(s32 *)(arg0 + 0x54) + (arg1 << 7);
}
