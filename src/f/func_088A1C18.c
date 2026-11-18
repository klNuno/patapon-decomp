typedef signed char s8;
typedef int s32;

extern s32 func_0881F5C0(s32, s32, s32);

char *func_088A1C18(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s32 *)(arg0 + 4) = 0;
    *(s8 *)(arg0 + 8) = 0;
    *(s8 *)(arg0 + 9) = 0;
    func_0881F5C0((s32) (arg0 + 0x20), 0, 0xA0);
    *(s32 *)(arg0 + 0x80) = 0x3F800000;
    *(s32 *)(arg0 + 0x84) = 0x3F800000;
    *(s32 *)(arg0 + 0x88) = 0x3F800000;
    *(s32 *)(arg0 + 0x8C) = 0x3F800000;
    return arg0;
}
