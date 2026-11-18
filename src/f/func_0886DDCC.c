typedef int s32;

extern s32 func_0887ED78(s32, s32);
extern int func_089A630C(char *, s32, s32);

s32 func_0886DDCC(char *arg0, s32 arg1) {
    if (func_0887ED78(*(s32 *)(arg0 + 0x1500), 0x308) != 0) {
        return 0x10001;
    }
    func_089A630C(arg0 + 0x1518, *(s32 *)(arg0 + 0x1500), arg1);
    return 0x10000;
}
