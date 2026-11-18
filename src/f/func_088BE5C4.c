typedef signed char s8;
typedef int s32;
typedef float f32;

void func_088BE5C4(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x4BC) = 0;
    *(s32 *)(arg0 + 0x4C0) = 0x3F000000;
    *(s8 *)(arg0 + 0x4B8) = 1;
    *(s32 *)(arg0 + 0x4A4) = arg1;
    *(f32 *)(arg0 + 0x4A0) = (f32) *(f32 *)(arg0 + 0x49C);
}
