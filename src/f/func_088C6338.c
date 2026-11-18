typedef int s32;

void func_088C6338(char *arg0, char *arg1) {
    s32 *temp_a0;

    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0x18);
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(arg1 + 0x1C);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 0x20);
    *(s32 **)(arg0 + 0xC) = (s32 *) *(s32 **)(arg1 + 0x24);
    if (*(s32 *)(arg0 + 8) != 0) {
        temp_a0 = *(s32 **)(arg0 + 0xC);
        *temp_a0 += 1;
    }
}
