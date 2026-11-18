typedef unsigned char u8;
typedef int s32;

char *func_089528BC(char *arg0, char *arg1) {
    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0);
    *(s32 *)(arg0 + 4) = (s32) *(s32 *)(arg1 + 4);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 8);
    *(s32 *)(arg0 + 0xC) = (s32) *(s32 *)(arg1 + 0xC);
    *(s32 *)(arg0 + 0x10) = (s32) *(s32 *)(arg1 + 0x10);
    *(s32 *)(arg0 + 0x14) = (s32) *(s32 *)(arg1 + 0x14);
    *(s32 *)(arg0 + 0x18) = (s32) *(s32 *)(arg1 + 0x18);
    *(u8 *)(arg0 + 0x1C) = (u8) *(u8 *)(arg1 + 0x1C);
    *(u8 *)(arg0 + 0x1D) = (u8) *(u8 *)(arg1 + 0x1D);
    return arg0;
}
