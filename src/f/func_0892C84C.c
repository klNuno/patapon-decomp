typedef int s32;

extern s32 func_0892AE88(s32);

s32 func_0892C84C(char *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 0x2F8);
    if (temp_a0 == 0) {
        return 0;
    }
    return func_0892AE88(temp_a0);
}
