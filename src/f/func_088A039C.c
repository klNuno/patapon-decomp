typedef int s32;

s32 func_088A039C(char *arg0) {
    char *temp_v0;

    temp_v0 = *(char **)(arg0 + 0xA4);
    if (temp_v0 != 0) {
        return *(s32 *)(temp_v0 + 0x10);
    }
    return 0;
}
