typedef int s32;

extern s32 func_08837D0C(s32);

void func_0887B710(s32 *arg0) {
    s32 temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 >= 0) {
        func_08837D0C(temp_a0);
        *arg0 = -1;
    }
}
