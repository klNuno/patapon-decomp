typedef int s32;

void func_088B60B0(char *arg0, char *arg1, s32 arg2) {
    s32 *temp_a0;
    char *temp_a1;

    temp_a1 = (char *) (*(s32 *)(arg1 + 0x24) + (arg2 * 0x10));
    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(temp_a1 + 0);
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(temp_a1 + 4);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(temp_a1 + 8);
    *(s32 **)(arg0 + 0xC) = (s32 *) *(s32 **)(temp_a1 + 0xC);
    if (*(s32 *)(arg0 + 8) != 0) {
        temp_a0 = *(s32 **)(arg0 + 0xC);
        *temp_a0 += 1;
    }
}
