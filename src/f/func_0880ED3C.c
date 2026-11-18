typedef int s32;
typedef unsigned int u32;

extern s32 func_08810D24(s32, s32);

u32 func_0880ED3C(s32 arg0, u32 arg1, u32 arg2, s32 *arg3) {
    char *var_s1;
    u32 var_s0;

    var_s1 = (char *) (arg3);
    var_s0 = arg1;
    if (arg1 < arg2) {
        do {
            *(s32 *)var_s1 = func_08810D24(arg0 + 8, (s32) var_s0);
            var_s0 += 4;
            var_s1 += 4;
        } while (var_s0 < arg2);
    }
    return arg2;
}
