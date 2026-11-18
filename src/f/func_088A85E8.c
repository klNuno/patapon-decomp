typedef int s32;

s32 func_088A85E8(char *arg0) {
    char *temp_v0;

    temp_v0 = *(char **)(arg0 + 0x430);
    if (temp_v0 != 0) {
        return *(s32 *)(temp_v0 + 0x50);
    }
    return 0;
}
