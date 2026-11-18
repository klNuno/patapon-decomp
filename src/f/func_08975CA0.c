typedef int s32;

extern s32 func_088CB260(s32, s32);

s32 func_08975CA0(s32 *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        return func_088CB260(temp_a0, arg1);
    }
    return 0;
}
