typedef float f32;

void func_088BFFD8(char **arg0, char *arg1) {
    char *temp_v1;

    temp_v1 = *arg0;
    *(f32 *)(temp_v1 + 0x130) = (f32) *(f32 *)(arg1 + 0);
    *(f32 *)(temp_v1 + 0x134) = (f32) *(f32 *)(arg1 + 4);
    *(f32 *)(temp_v1 + 0x138) = (f32) *(f32 *)(arg1 + 8);
}
