typedef int s32;

char *func_088A6ACC(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 8) = arg1;
    *(s32 *)(arg0 + 0xC) = 0;
    *(char **)(arg0 + 0) = arg0;
    *(char **)(arg0 + 4) = arg0;
    return arg0;
}
