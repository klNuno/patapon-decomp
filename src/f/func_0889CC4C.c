typedef int s32;
typedef float f32;

void func_0889CC4C(char *arg0, s32 arg1) {
    f32 var_f1;

    var_f1 = *(f32 *)((char *)(*(char **)((char *)(*(char **)(arg0 + 0x3F8)) + 0x3B8)) + 0x34);
    if (arg1 != 0) {
        var_f1 *= -1.0f;
    }
    if (var_f1 != 0.0f) {
        *(f32 *)(arg0 + 0x408) = var_f1;
    }
}
