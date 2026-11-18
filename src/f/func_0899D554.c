typedef int s32;
typedef unsigned int u32;

s32 func_0899D554(char *arg0) {
    u32 var_a1;
    char *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
loop_1:
    if (*(s32 *)(var_a0 + 0x1F4) == 1) {
        return 0;
    }
    var_a1 += 1;
    var_a0 += 0x220;
    if (var_a1 >= 3U) {
        return 1;
    }
    goto loop_1;
}
