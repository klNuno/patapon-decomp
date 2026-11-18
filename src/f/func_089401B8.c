typedef int s32;

void func_089401B8(char *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *temp_v1;

    temp_v1 = (char *) (*(s32 *)(arg0 + 0x1EB0) + (arg1 * 0x38));
    *(s32 *)(temp_v1 + 0x24) = arg2;
    *(s32 *)(temp_v1 + 0x28) = arg3;
    *(s32 *)(temp_v1 + 0x2C) = arg4;
}
