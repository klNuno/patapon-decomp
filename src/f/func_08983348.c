typedef int s32;

extern s32 func_088CE494(s32, s32);

void func_08983348(char *arg0) {
    s32 temp_a0;

    *(s32 *)(arg0 + 0x3DA4) = 0;
    temp_a0 = *(s32 *)(arg0 + 0x34);
    if (temp_a0 != 0) {
        func_088CE494(temp_a0, (s32) arg0);
        *(s32 *)(arg0 + 0x34) = 0;
    }
}
