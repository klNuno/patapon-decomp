typedef signed char s8;
typedef int s32;

extern s32 func_0885A2D8(s32);

char *func_08859C64(char *arg0) {
    *(s32 *)(arg0 + 0) = 0;
    func_0885A2D8((s32) (arg0 + 4));
    func_0885A2D8((s32) (arg0 + 0x414));
    *(s32 *)(arg0 + 0x824) = 0;
    *(s32 *)(arg0 + 0x828) = 0;
    *(s32 *)(arg0 + 0xC2C) = 1;
    *(s8 *)(arg0 + 0xC30) = 0;
    *(s8 *)(arg0 + 0xC31) = 1;
    *(s8 *)(arg0 + 0xC32) = 1;
    *(s32 *)(arg0 + 0xC34) = 0;
    *(s32 *)(arg0 + 0xC38) = 0;
    return arg0;
}
