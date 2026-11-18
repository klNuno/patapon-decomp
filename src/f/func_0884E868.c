typedef int s32;

char *func_0884E868(char *arg0, char *arg1) {
    s32 *temp_v1;

    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0);
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(arg1 + 4);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 8);
    *(s32 **)(arg0 + 0xC) = (s32 *) *(s32 **)(arg1 + 0xC);
    if (*(s32 *)(arg0 + 8) != 0) {
        temp_v1 = *(s32 **)(arg0 + 0xC);
        *temp_v1 += 1;
    }
    return arg0;
}
