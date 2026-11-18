typedef int s32;

char *func_088D710C(char *arg0, char *arg1) {
    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0);
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(arg1 + 4);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 8);
    *(s32 *)(arg0 + 0xC) = (s32) *(s32 *)(arg1 + 0xC);
    return arg0;
}
