typedef int s32;

void func_08930354(s32 arg0, s32 arg1) {
    char *temp_a0;

    temp_a0 = (char *) (arg0 + (arg1 * 0x10));
    *(s32 *)(temp_a0 + 0x98) = 0;
    *(s32 *)(temp_a0 + 0x9C) = -1;
}
