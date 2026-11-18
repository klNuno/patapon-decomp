typedef signed char s8;
typedef int s32;

extern s32 func_088E63DC(s32);

void func_08941F60(char *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 0x1AC);
    if (temp_a0 != 0) {
        func_088E63DC(temp_a0);
        *(s8 *)((char *)(*(s32 *)(arg0 + 0x1AC)) + 0x4B0) = 0;
        *(s32 *)(arg0 + 0x1AC) = 0;
    }
}
