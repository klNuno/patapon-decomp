typedef short s16;
typedef int s32;

extern s32 func_088C0054(s32, s32);

char *func_088C52F0(char *arg0) {
    *(s32 *)(arg0 + 0) = 0;
    *(s16 *)(arg0 + 4) = 0;
    *(s16 *)(arg0 + 6) = 0;
    *(s32 *)(arg0 + 8) = 0;
    *(s16 *)(arg0 + 0xC) = 0;
    *(s16 *)(arg0 + 0xE) = 0;
    *(s32 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0x14) = 0;
    *(s32 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x1C) = 0;
    *(s32 *)(arg0 + 0x20) = 0;
    *(s32 *)(arg0 + 0x24) = 0;
    *(s32 *)(arg0 + 0x28) = 0;
    *(s32 *)(arg0 + 0x2C) = 0;
    *(s32 *)(arg0 + 0x30) = 0;
    *(s32 *)(arg0 + 0x34) = 0;
    func_088C0054((s32) (arg0 + 0x40), (s32) arg0);
    return arg0;
}
