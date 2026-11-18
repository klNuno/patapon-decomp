typedef int s32;
typedef float f32;

s32 func_08987D34(char *arg0, char *arg1) {
    *(f32 *)(arg1 + 0x30) = (f32) *(s32 *)(arg0 + 0xC);
    *(f32 *)(arg1 + 0x34) = (f32) *(s32 *)(arg0 + 0x10);
    return 0;
}
