typedef int s32;

char *func_088860D0(char *arg0) {
    if (!(*(s32 *)(arg0 + 0x10C) & 1)) {
        return arg0 + 0x10D;
    }
    return *(char **)(arg0 + 0x114);
}
