typedef int s32;

extern s32 func_0894CB28(s32, s32, s32, s32);

s32 func_0894CEC0(char *arg0, s32 arg1) {
    if (*(s32 *)(arg0 + 0xE0) == 0) {
        return 0;
    }
    func_0894CB28((s32) arg0, (s32) (arg0 + 0xE0), (s32) (arg0 + 8), arg1);
    *(s32 *)(arg0 + 0xE0) = 0;
    *(s32 *)(arg0 + 0xFC) = 0;
    return 1;
}
