typedef int s32;

void func_089B663C(char *arg0, char *arg1) {
    s32 *temp_a0;

    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0x848C);
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(arg1 + 0x8490);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 0x8494);
    *(s32 **)(arg0 + 0xC) = (s32 *) *(s32 **)(arg1 + 0x8498);
    if (*(s32 *)(arg0 + 8) != 0) {
        temp_a0 = *(s32 **)(arg0 + 0xC);
        *temp_a0 += 1;
    }
}
