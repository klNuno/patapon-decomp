typedef float f32;

void func_088D43C8(char *arg0, f32 fparg0, f32 fparg1) {
    char *temp_a0;
    char *temp_v1;

    temp_a0 = *(char **)(arg0 + 0x6E0);
    temp_v1 = *(char **)(temp_a0 + 8);
    *(f32 *)(temp_a0 + 0x18) = (f32) (fparg0 - *(f32 *)(temp_v1 + 0));
    *(f32 *)(temp_a0 + 0x1C) = (f32) (fparg1 - *(f32 *)(temp_v1 + 4));
}
