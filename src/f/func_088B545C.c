typedef signed char s8;
typedef int s32;
typedef float f32;

void func_088B545C(char *arg0, char *arg1, s8 arg2, f32 fparg0, f32 fparg1) {
    *(f32 *)(arg0 + 0x20) = (f32) *(f32 *)(arg1 + 0);
    *(f32 *)(arg0 + 0x24) = (f32) *(f32 *)(arg1 + 4);
    *(f32 *)(arg0 + 0x28) = fparg1;
    *(s8 *)(arg0 + 0x2C) = arg2;
    *(s32 *)(arg0 + 0x9C) = 0;
    *(f32 *)(arg0 + 0xA0) = fparg0;
    *(s8 *)(arg0 + 0x98) = 1;
}
