typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef struct { f32 a, b; } F2;

extern int func_089117F0(s32, f32 *);

void func_0891093C(char *arg0, char *arg1) {
    F2 sp18;
    s32 temp_a0;
    u32 var_s1;
    char *var_s0;

    var_s0 = arg0;
    var_s1 = 0;
    do {
        temp_a0 = *(s32 *)(var_s0 + 0x10);
        if (temp_a0 != 0) {
            sp18.a = *(f32 *)(arg1 + 0);
            sp18.b = *(f32 *)(arg1 + 4);
            func_089117F0(temp_a0, (float *) (&sp18));
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3U);
}
