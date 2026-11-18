typedef signed char s8;
typedef int s32;

extern s32 func_0886E590(s32, s32, s32);

s32 func_08872EEC(char *arg0, s32 arg1) {
    if (arg1 == -1) {
        return 0;
    }
    *(s8 *)(arg0 + 0x2970) = 0;
    *(s32 *)(arg0 + 0x151C) = arg1;
    func_0886E590((s32) arg0, arg1, 0);
    return 1;
}
