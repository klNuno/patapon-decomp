typedef int s32;
typedef float f32;

s32 func_08909918(char *arg0, f32 fparg0) {
    f32 temp_f1;
    s32 var_v0;

    temp_f1 = *(f32 *)(arg0 + 8);
    var_v0 = 0;
    if ((temp_f1 >= 0.0f) && (fparg0 <= *(f32 *)(arg0 + 0))) {
        var_v0 = 1;
    } else if ((temp_f1 < 0.0f) && (fparg0 >= *(f32 *)(arg0 + 0))) {
        var_v0 = 1;
    }
    return var_v0;
}
