typedef unsigned char u8;
typedef int s32;

char *func_088FCDC0(char *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s32 *)(arg0 + 4) = -1;
    *(u8 *)(arg0 + 0xC) = 0xFF;
    *(u8 *)(arg0 + 0xD) = 0xFF;
    *(u8 *)(arg0 + 0xE) = 0xFF;
    *(u8 *)(arg0 + 0xF) = 0xFF;
    *(s32 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0x14) = 0;
    *(s32 *)(arg0 + 0x18) = arg2;
    return arg0;
}
