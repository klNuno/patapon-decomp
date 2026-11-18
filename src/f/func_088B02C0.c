typedef float f32;

char *func_088B02C0(char *arg0, char *arg1) {
    *(f32 *)(arg0 + 0) = (f32) *(f32 *)(arg1 + 0);
    *(f32 *)(arg0 + 4) = (f32) *(f32 *)(arg1 + 4);
    return arg0;
}
