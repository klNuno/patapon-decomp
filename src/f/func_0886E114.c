typedef int s32;

char *func_0886E114(char *arg0, s32 *arg1, char *arg2) {
    *(s32 *)(arg0 + 0) = (s32) *arg1;
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(arg2 + 0);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg2 + 4);
    return arg0;
}
