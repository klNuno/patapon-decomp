typedef int s32;

void func_08946678(char *arg0, char *arg1) {
    s32 temp_a2;

    temp_a2 = *(s32 *)(arg0 + 8);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 8);
    *(s32 *)(arg1 + 8) = temp_a2;
}
