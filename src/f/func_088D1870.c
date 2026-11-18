typedef signed char s8;
typedef int s32;

void func_088D1870(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x100) = arg1;
    if (arg1 != 0) {
        *(s8 *)(arg0 + 0xBC) = 1;
        return;
    }
    *(s8 *)(arg0 + 0xBC) = 0;
}
