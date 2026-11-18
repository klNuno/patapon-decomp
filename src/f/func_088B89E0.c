typedef int s32;

void func_088B89E0(char *arg0, char *arg1) {
    s32 *temp_a1;
    char *temp_a2;

    temp_a2 = (char *) (*(s32 *)(arg0 + 0x404) + (*(s32 *)(arg0 + 0x408) * 0x10));
    if (temp_a2 != 0) {
        *(s32 *)(temp_a2 + 0) = (s32) *(s32 *)(arg1 + 0);
        *(s32 *)(temp_a2 + 4) = (s32) *(s32 *)(arg1 + 4);
        *(s32 *)(temp_a2 + 8) = (s32) *(s32 *)(arg1 + 8);
        *(s32 **)(temp_a2 + 0xC) = (s32 *) *(s32 **)(arg1 + 0xC);
        if (*(s32 *)(temp_a2 + 8) != 0) {
            temp_a1 = *(s32 **)(temp_a2 + 0xC);
            *temp_a1 += 1;
        }
    }
    *(s32 *)(arg0 + 0x408) = (s32) (*(s32 *)(arg0 + 0x408) + 1);
}
