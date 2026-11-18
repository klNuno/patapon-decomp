typedef int s32;

extern s32 func_0888ABB0(s32, s32, s32);

s32 func_0888B03C(s32 *arg0, s32 arg1) {
    return *arg0 + *(s32 *)((char *)(func_0888ABB0(arg1, *arg0, 0)) + 8);
}
