typedef int s32;
typedef unsigned int u32;

char *func_0885A928(char *arg0) {
    u32 var_a1;
    char *var_v1;

    var_a1 = 0;
    var_v1 = arg0;
    do {
        *(s32 *)(var_v1 + 0) = 0;
        *(s32 *)(var_v1 + 4) = 0;
        *(s32 *)(var_v1 + 8) = 0;
        var_a1 += 1;
        *(s32 *)(var_v1 + 0xC) = 0;
        var_v1 += 0x10;
    } while (var_a1 < 2U);
    return arg0;
}
