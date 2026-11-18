typedef float f32;

f32 func_088B726C(char *arg0) {
    char *temp_v0;

    temp_v0 = *(char **)(arg0 + 0x70);
    if (temp_v0 != 0) {
        return *(f32 *)(temp_v0 + 0xC);
    }
    return 0.0f;
}
