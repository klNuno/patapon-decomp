typedef float f32;

void func_088D43EC(char *arg0, f32 fparg0, f32 fparg1) {
    char *temp_v1;

    temp_v1 = *(char **)(arg0 + 0x6E0);
    *(f32 *)(temp_v1 + 0x10) = fparg0;
    *(f32 *)(temp_v1 + 0x14) = fparg1;
}
