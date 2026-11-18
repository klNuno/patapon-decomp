typedef int s32;
typedef float f32;

extern f32 *func_0884EBB0(s32, s32);
extern s32 func_08853004(s32);

s32 func_0896EB7C(char *arg0) {
    f32 temp_f1;

    temp_f1 = *func_0884EBB0(func_08853004(*(s32 *)(arg0 + 4)), 0x21);
    if ((temp_f1 >= 0.0f) && (temp_f1 < 1.0f)) {
        return 1;
    }
    return 0;
}
