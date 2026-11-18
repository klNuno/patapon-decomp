typedef int s32;

char *func_08990D20(s32 arg0, s32 arg1) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s32 *)(arg0 + 0x3814) = (s32) (((arg0 + 4) & 0xF) + arg0 + 4);
    *(s32 *)(arg0 + 0x3818) = 0;
    return (char *) (arg0);
}
