typedef signed char s8;
typedef int s32;

extern s32 func_089BCF98(s32, s32);

void func_089BCF3C(char *arg0) {
    s32 temp_s1;

    temp_s1 = *(s32 *)((*(s32 *)(arg0 + 0x1C14) + (*(s32 *)(arg0 + 0xC) * 4)));
    if (func_089BCF98((s32) arg0, temp_s1) & 0xFF) {
        *(s32 *)(arg0 + 0x16D0) = temp_s1;
        *(s8 *)(arg0 + 9) = 1;
    }
}
