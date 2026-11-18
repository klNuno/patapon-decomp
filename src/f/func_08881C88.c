typedef int s32;

s32 func_08881C88(char **arg0, char **arg1) {
    s32 var_v0;
    char *temp_a0;
    char *temp_a1;

    temp_a1 = *arg1;
    temp_a0 = *arg0;
    var_v0 = *(s32 *)(temp_a0 + 8) == *(s32 *)(temp_a1 + 8);
    if (var_v0 != 0) {
        var_v0 = *(s32 *)(temp_a0 + 4) == *(s32 *)(temp_a1 + 4);
    }
    if (var_v0 != 0) {
        var_v0 = *(s32 *)(temp_a0 + 0) == *(s32 *)(temp_a1 + 0);
    }
    return var_v0 ^ 1;
}
