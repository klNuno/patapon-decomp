typedef signed char s8;
typedef int s32;

extern int func_0880D9F8(s32);

char *func_0880D9C0(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s8 *)(arg0 + 4) = 1;
    func_0880D9F8(*(s32 *)(arg0 + 0));
    return arg0;
}
