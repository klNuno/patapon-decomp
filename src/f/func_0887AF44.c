typedef signed char s8;
typedef int s32;

void func_0887AF44(char *arg0) {
    if (*(s32 *)(arg0 + 0x44) == 1) {
        if ((*(s32 *)(arg0 + 0x14) & 1) == 1) {
            *(s8 *)(arg0 + 0x2C) = 1;
        }
        *(s32 *)(arg0 + 0xC) = 0;
    }
}
