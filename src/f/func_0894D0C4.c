typedef signed char s8;
typedef int s32;

char *func_0894D0C4(char *arg0, s32 arg1) {
    *(s8 *)(arg0 + 8) = 1;
    *(s32 *)(arg0 + 4) = 1;
    *(s32 *)(arg0 + 0) = 1;
    *(s32 *)(arg0 + 0xC) = arg1;
    *(s32 *)(arg0 + 0xA0) = 0;
    *(s32 *)(arg0 + 0x100) = 0;
    *(s32 *)(arg0 + 0xF8) = 0;
    *(s32 *)(arg0 + 0xFC) = 0;
    return arg0;
}
