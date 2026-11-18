typedef signed char s8;
typedef int s32;

extern int func_088072E8(s32);

char *func_088072B0(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s8 *)(arg0 + 4) = 1;
    func_088072E8(*(s32 *)(arg0 + 0));
    return arg0;
}
