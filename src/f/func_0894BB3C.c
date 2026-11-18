typedef int s32;
typedef float f32;

f32 func_0894BB3C(char *arg0) {
    f32 temp_f1;

    temp_f1 = (f32) *(s32 *)(arg0 + 0xC) / 1000.0f;
    if (temp_f1 > 1.0f) {
        return 1.0f;
    }
    if (!(temp_f1 < 0.5f)) {
        return temp_f1;
    }
    return 0.5f;
}
