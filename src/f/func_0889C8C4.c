typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern s32 func_0889C93C(s32, s32);

s32 func_0889C8C4(char *arg0, char *arg1) {
    s32 temp_v0;

    if (arg1 == 0) {
        return 0;
    }
    *(s32 *)(arg0 + 0) = (s32) *(s32 *)(arg1 + 0);
    *(f32 *)(arg0 + 4) = (f32) *(f32 *)(arg1 + 4);
    *(s32 *)(arg0 + 8) = (s32) *(s32 *)(arg1 + 8);
    *(u8 *)(arg0 + 0xC) = (u8) *(u8 *)(arg1 + 0xC);
    temp_v0 = func_0889C93C((s32) arg0, *(s32 *)(arg0 + 0));
    if ((temp_v0 != 0) && (*(s32 *)(temp_v0 + 0x40) == 1)) {
        *(s32 *)(arg0 + 0x10) = (s32) *(s32 *)(arg0 + 0);
    }
    return 1;
}
