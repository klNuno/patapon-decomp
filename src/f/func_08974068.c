typedef int s32;
typedef unsigned int u32;
typedef float f32;

void func_08974068(char *arg0, f32 fparg0) {
    f32 temp_f1;
    s32 var_v1;

    temp_f1 = 4800.0f * fparg0;
    var_v1 = (u32) temp_f1;
    *(s32 *)(arg0 + 8) = var_v1;
    *(s32 *)(arg0 + 4) = 0;
    if (*(s32 *)(arg0 + 8) == 0) {
        *(s32 *)(arg0 + 4) = 1;
        *(s32 *)(arg0 + 8) = 1;
    }
}
