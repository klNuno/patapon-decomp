typedef signed char s8;
typedef float f32;

void func_0891E074(char *arg0, s8 arg1, char *arg2) {
    *(s8 *)(arg0 + 0x10) = arg1;
    if (arg2 != 0) {
        *(f32 *)(arg0 + 0) = (f32) *(f32 *)(arg2 + 0);
        *(f32 *)(arg0 + 4) = (f32) *(f32 *)(arg2 + 4);
        *(f32 *)(arg0 + 8) = (f32) *(f32 *)(arg2 + 8);
        *(f32 *)(arg0 + 0xC) = (f32) *(f32 *)(arg2 + 0xC);
    }
}
