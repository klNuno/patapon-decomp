typedef int s32;

s32 func_088C0020(char *arg0) {
    s32 *temp_v0;

    if (*(s32 *)(arg0 + 0) == 0) {
        return 1;
    }
    temp_v0 = *(s32 **)(arg0 + 4);
    if (temp_v0 == 0) {
        return 1;
    }
    return *temp_v0 == 1;
}
