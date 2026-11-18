typedef int s32;

char *func_08990A94(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0) = 0x3F800000;
    *(s32 *)(arg0 + 4) = 0;
    *(s32 *)(arg0 + 8) = 0;
    *(s32 *)(arg0 + 0xC) = 0x3F800000;
    *(s32 *)(arg0 + 0x10) = 0x3F800000;
    *(s32 *)(arg0 + 0x14) = 0x3F800000;
    *(s32 *)(arg0 + 0x18) = arg1;
    return arg0;
}
