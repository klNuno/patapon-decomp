typedef int s32;

extern s32 sceMpegRingbufferPut(char *, s32, s32);

void func_0895E80C(char *arg0) {
    s32 temp_a1;

    temp_a1 = *(s32 *)(arg0 + 0x430);
    if (temp_a1 != 0) {
        *(s32 *)(arg0 + 0x430) = (s32) (*(s32 *)(arg0 + 0x430) - sceMpegRingbufferPut(arg0 + 0x34, temp_a1, temp_a1));
    }
    if (*(s32 *)(arg0 + 0x430) == 0) {
        *(s32 *)(arg0 + 0x1C) = 4;
    }
}
