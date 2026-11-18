typedef int s32;

void func_089401FC(char *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    char *temp_a0;

    temp_a0 = (char *) (*(s32 *)(arg0 + 0x1EB0) + (arg1 * 0x38));
    *arg2 = *(s32 *)(temp_a0 + 0x30);
    *arg3 = *(s32 *)(temp_a0 + 0x34);
}
