typedef float f32;

void func_08927ED4(char *arg0, f32 fparg0) {
    f32 temp_f1;

    temp_f1 = *(f32 *)(arg0 + 0x20);
    if (temp_f1 < 0.0f) {
        *(f32 *)(arg0 + 0x1C) = 0.0f;
    } else {
        *(f32 *)(arg0 + 0x1C) = temp_f1;
    }
    *(f32 *)(arg0 + 0x20) = fparg0;
}
