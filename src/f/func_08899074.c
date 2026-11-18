typedef signed char s8;
typedef int s32;

void func_08899074(char *arg0) {
    s32 var_a1;
    char *var_a0;

    var_a0 = arg0;
    *(s32 *)(var_a0 + 0x3E0) = 0;
    *(s8 *)(var_a0 + 0x2F58) = 1;
    *(s8 *)(var_a0 + 0x390) = 1;
    *(s32 *)(var_a0 + 0x394) = 0;
    var_a1 = 0;
    do {
        *(s32 *)(var_a0 + 0x2F5C) = 0;
        *(s32 *)(var_a0 + 0x2F60) = 0;
        *(s32 *)(var_a0 + 0x2F64) = 0;
        *(s32 *)(var_a0 + 0x2F68) = 0;
        *(s32 *)(var_a0 + 0x2F6C) = 0;
        var_a1 += 6;
        *(s32 *)(var_a0 + 0x2F70) = 0;
        var_a0 += 0x18;
    } while (var_a1 < 0xC);
}
