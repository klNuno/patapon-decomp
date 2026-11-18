typedef int s32;

void func_08898FCC(char *arg0, char *arg1) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;

    temp_a2 = *(s32 *)(arg0 + 0);
    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0);
    *(s32 *)(arg1 + 0) = temp_a2;
    temp_a2_2 = *(s32 *)(arg0 + 4);
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(arg1 + 4);
    *(s32 *)(arg1 + 4) = temp_a2_2;
    temp_a2_3 = *(s32 *)(arg0 + 8);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 8);
    *(s32 *)(arg1 + 8) = temp_a2_3;
    temp_a2_4 = *(s32 *)(arg0 + 0xC);
    *(s32 *)(arg0 + 0xC) = (s32) *(s32 *)(arg1 + 0xC);
    *(s32 *)(arg1 + 0xC) = temp_a2_4;
}
