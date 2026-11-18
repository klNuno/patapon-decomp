typedef unsigned char u8;
typedef int s32;

extern s32 func_0892AE88(s32);

u8 func_0892C7F0(char *arg0) {
    if (*(s32 *)((char *)(func_0892AE88(*(s32 *)(arg0 + 0x2F8))) + 0x64) == 0) {
        return 0U;
    }
    if (*(s32 *)(arg0 + 0x40C) == 0) {
        return 0U;
    }
    return *(u8 *)(arg0 + 0x5CE);
}
