typedef int s32;

extern s32 func_08806504(s32);

char *func_088064C4(char *arg0, char *arg1) {
    s32 temp_v0;

    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0);
    temp_v0 = *(s32 *)(arg1 + 4);
    *(s32 *)(arg0 + 4) = temp_v0;
    if (temp_v0 != 0) {
        func_08806504(temp_v0);
    }
    return arg0;
}
