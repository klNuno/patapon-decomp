typedef int s32;

extern s32 func_0887ED78(s32, s32);
extern int func_088B7C88(char *, s32, s32);

s32 func_0886DCBC(char *arg0, s32 arg1) {
    if (func_0887ED78(*(s32 *)(arg0 + 0x1500), 0x308) != 0) {
        return 0x10001;
    }
    func_088B7C88(arg0 + 0x1514, *(s32 *)(arg0 + 0x1500), arg1);
    return 0x10000;
}
