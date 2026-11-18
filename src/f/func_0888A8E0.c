typedef int s32;

void func_0888A8E0(char *arg0, char *arg1) {
    s32 *temp_a0;

    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0xD54);
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(arg1 + 0xD58);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 0xD5C);
    *(s32 **)(arg0 + 0xC) = (s32 *) *(s32 **)(arg1 + 0xD60);
    if (*(s32 *)(arg0 + 8) != 0) {
        temp_a0 = *(s32 **)(arg0 + 0xC);
        *temp_a0 += 1;
    }
}
