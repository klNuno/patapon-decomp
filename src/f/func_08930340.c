typedef int s32;

void func_08930340(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    char *temp_v1;

    temp_v1 = (char *) (arg0 + (arg1 * 0x10));
    *(s32 *)(temp_v1 + 0x98) = arg2;
    *(s32 *)(temp_v1 + 0x9C) = arg3;
}
