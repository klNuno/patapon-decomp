typedef int s32;

extern s32 func_08890D90(s32, s32);

s32 func_08973F20(char *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = *(s32 *)(arg0 + 4);
    if (temp_a0 != 0) {
        temp_v0 = func_08890D90(temp_a0, arg1);
        if (temp_v0 != 0) {
            return temp_v0;
        }
    }
    return 0;
}
