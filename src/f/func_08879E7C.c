typedef int s32;

s32 func_08879E7C(char *arg0) {
    if (*(s32 *)(arg0 + 0x108) == 0) {
        return 0;
    }
    return *(s32 *)((char *)(*(char **)(arg0 + 0x104)) + 8) == 1;
}
