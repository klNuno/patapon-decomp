typedef int s32;

extern int func_08812278(char *, s32, s32);

char *func_0881223C(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0) = 0;
    *(s32 *)(arg0 + 4) = 0;
    func_08812278(arg0 + 8, 0, arg1);
    return arg0;
}
