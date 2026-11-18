typedef int s32;

extern s32 func_0885AB7C(s32, s32, s32);

s32 func_0889C93C(char *arg0, s32 arg1) {
    if (arg1 < 0) {
        return 0;
    }
    return func_0885AB7C(*(s32 *)(arg0 + 0x20), 0, arg1);
}
