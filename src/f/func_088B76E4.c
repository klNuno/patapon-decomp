typedef signed char s8;
typedef int s32;
typedef float f32;

void func_088B76E4(char *arg0, f32 fparg0) {
    *(s32 *)(arg0 + 0x360) = 0;
    *(f32 *)(arg0 + 0x364) = fparg0;
    *(s8 *)(arg0 + 0x35C) = 1;
}
