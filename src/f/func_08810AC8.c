typedef unsigned short u16;
typedef int s32;

char *func_08810AC8(char *arg0, char *arg1) {
    *(u16 *)(arg0 + 0) = (u16) *(u16 *)(arg1 + 0);
    *(u16 *)(arg0 + 4) = (u16) *(u16 *)(arg1 + 4);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 8);
    *(s32 *)(arg0 + 0xC) = (s32) *(s32 *)(arg1 + 0xC);
    return arg0;
}
