typedef int s32;
typedef unsigned int u32;

void func_089C6524(char *arg0) {
    u32 var_a2;
    char *var_a0;

    var_a0 = arg0;
    var_a2 = 0;
    do {
        var_a2 += 1;
        *(s32 *)(var_a0 + 0x20) = -1;
        var_a0 += 4;
    } while (var_a2 < 0x40U);
}
