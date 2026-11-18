typedef int s32;

void func_08908108(char *arg0, char *arg1) {
    s32 *temp_a0;

    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0x1C7520);
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(arg1 + 0x1C7524);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 0x1C7528);
    *(s32 **)(arg0 + 0xC) = (s32 *) *(s32 **)(arg1 + 0x1C752C);
    if (*(s32 *)(arg0 + 8) != 0) {
        temp_a0 = *(s32 **)(arg0 + 0xC);
        *temp_a0 += 1;
    }
}
