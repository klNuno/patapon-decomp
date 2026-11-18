typedef signed char s8;
typedef int s32;
typedef float f32;

void func_088B76C0(char *arg0, f32 fparg0) {
    *(s32 *)(arg0 + 0x344) = 0;
    *(f32 *)(arg0 + 0x348) = fparg0;
    *(s8 *)(arg0 + 0x340) = 1;
}
