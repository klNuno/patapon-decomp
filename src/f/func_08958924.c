typedef int s32;

char *func_08958924(char *arg0) {
    char *temp_v0;

    temp_v0 = *(char **)(arg0 + 0xAA0);
    if ((temp_v0 != 0) && (*(s32 *)(temp_v0 + 4) == 1)) {
        return temp_v0;
    }
    return 0;
}
