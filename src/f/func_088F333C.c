typedef signed char s8;
typedef float f32;

void func_088F333C(char *arg0, char *arg1) {
    *(s8 *)(arg0 + 0x28) = 0;
    *(f32 *)(arg0 + 0x18) = (f32) *(f32 *)(arg1 + 0);
    *(f32 *)(arg0 + 0x1C) = (f32) *(f32 *)(arg1 + 4);
}
