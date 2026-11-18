typedef int s32;

char *func_08976F88(char *arg0) {
    *(s32 *)(arg0 + 0x14) = 0;
    *(s32 *)(arg0 + 0x10) = 0;
    *(char **)(arg0 + 0xC) = (char *) (arg0 + 0x10);
    *(s32 *)(arg0 + 4) = 0;
    *(s32 *)(arg0 + 8) = 0;
    *(s32 *)(arg0 + 0) = 0;
    return arg0;
}
