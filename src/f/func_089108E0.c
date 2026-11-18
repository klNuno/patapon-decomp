typedef int s32;
typedef unsigned int u32;

extern int func_089117E8(s32, s32);

void func_089108E0(char *arg0, s32 arg1) {
    s32 temp_a0;
    u32 var_s1;
    char *var_s0;

    var_s0 = arg0;
    var_s1 = 0;
    do {
        temp_a0 = *(s32 *)(var_s0 + 0x10);
        if (temp_a0 != 0) {
            func_089117E8(temp_a0, arg1);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3U);
}
