typedef int s32;

extern s32 func_088CB164(s32);

s32 func_08975C78(s32 *arg0) {
    s32 temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        return func_088CB164(temp_a0);
    }
    return 0;
}
