typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

extern s32 func_08807E60(s32, s32);

s32 func_08807D88(char *arg0) {
    if (*(u8 *)(arg0 + 0x39) != 0) {
        if ((*(u8 *)(arg0 + 0x3A) != 0) && (func_08807E60((s32) arg0, (s32) *(u16 *)(arg0 + 0x34)) < 0)) {
            return -1;
        }
        *(u8 *)(arg0 + 0x3A) = 0U;
        goto block_5;
    }
block_5:
    return 0;
}
