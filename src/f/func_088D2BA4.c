typedef int s32;

char *func_088D2BA4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s32 *)(arg0 + 0x408) = (s32) (((arg0 + 4) & 3) + arg0 + 4);
    *(s32 *)(arg0 + 0x40C) = 0;
    *(s32 *)(arg0 + 0x410) = arg2;
    *(s32 *)(arg0 + 0x414) = arg3;
    return (char *) (arg0);
}
