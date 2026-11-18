typedef signed char s8;
typedef int s32;

extern s32 func_089B3EE0(s32);

void func_089B3BCC(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x54) = arg1;
    if (arg1 == 0) {
        *(s8 *)(arg0 + 0x68) = 0;
        return;
    }
    func_089B3EE0((s32) arg0);
    *(s8 *)(arg0 + 0x68) = 1;
}
