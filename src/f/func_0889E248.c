typedef int s32;

extern s32 func_0889E298(s32, s32, s32, s32, void *);
extern s32 func_0889ED34(void *, s32, void *);

s32 func_0889E248(char *arg0, s32 arg1, s32 arg2) {
    func_0889E298((s32) arg0, arg1, *(s32 *)(arg0 + 8), arg2, (arg0 + 0x4C));
    func_0889ED34((arg0 + 0x20), arg1, (arg0 + 0x4C));
    return 1;
}
