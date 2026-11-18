typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

extern s32 func_08808370(s32, s32);

s32 func_08808298(char *arg0) {
    if (*(u8 *)(arg0 + 0x36) != 0) {
        if ((*(u8 *)(arg0 + 0x37) != 0) && (func_08808370((s32) arg0, (s32) *(s8 *)(arg0 + 0x34)) < 0)) {
            return -1;
        }
        *(u8 *)(arg0 + 0x37) = 0U;
        goto block_5;
    }
block_5:
    return 0;
}
