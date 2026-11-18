typedef int s32;

void func_088539FC(char *arg0, s32 arg1) {
    char *temp_a2;

    temp_a2 = *(char **)(arg0 + 8);
    *(s32 *)(temp_a2 + 4) = (s32) (~(arg1 - 1) & ((*(s32 *)(temp_a2 + 4) + arg1) - 1));
}
