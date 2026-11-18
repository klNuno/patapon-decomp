typedef float f32;

void func_088BFFF8(char **arg0, char *arg1) {
    char *temp_v1;

    temp_v1 = *arg0;
    *(f32 *)(temp_v1 + 0x120) = (f32) *(f32 *)(arg1 + 0);
    *(f32 *)(temp_v1 + 0x124) = (f32) *(f32 *)(arg1 + 4);
    *(f32 *)(temp_v1 + 0x128) = (f32) *(f32 *)(arg1 + 8);
    *(f32 *)(temp_v1 + 0x12C) = (f32) *(f32 *)(arg1 + 0xC);
}
