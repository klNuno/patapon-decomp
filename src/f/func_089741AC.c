typedef signed char s8;
typedef int s32;

void func_089741AC(char *arg0) {
    *(s32 *)(arg0 + 8) = 0;
    *(s32 *)(arg0 + 4) = 0;
    if (*(s32 *)(arg0 + 8) == 0) {
        *(s32 *)(arg0 + 4) = 1;
        *(s32 *)(arg0 + 8) = 1;
    }
    *(s32 *)(arg0 + 0) = 0;
    *(s8 *)(arg0 + 0xC) = 0;
}
