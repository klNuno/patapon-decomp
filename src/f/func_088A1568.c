typedef float f32;

char *func_088A1568(char *arg0, char *arg1) {
    *(f32 *)(arg0 + 0) = (f32) *(f32 *)(arg1 + 0);
    *(f32 *)(arg0 + 4) = (f32) *(f32 *)(arg1 + 4);
    *(f32 *)(arg0 + 8) = (f32) *(f32 *)(arg1 + 8);
    *(f32 *)(arg0 + 0xC) = (f32) *(f32 *)(arg1 + 0xC);
    return arg0;
}
