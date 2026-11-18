typedef int s32;

extern s32 func_088CDFCC(s32, s32);

void func_088CDD04(char *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 8);
    if (temp_a0 != 0) {
        func_088CDFCC(temp_a0, *(s32 *)(arg0 + 0));
        *(s32 *)(arg0 + 8) = 0;
        *(s32 *)(arg0 + 4) = 0;
    }
}
