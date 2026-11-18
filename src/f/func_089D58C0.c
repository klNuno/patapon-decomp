typedef int s32;

void func_089D58C0(char *arg0) {
    s32 var_a1;
    char *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    do {
        *(s32 *)(var_a0 + 0) = 0;
        *(s32 *)(var_a0 + 4) = 0;
        *(s32 *)(var_a0 + 8) = 0;
        *(s32 *)(var_a0 + 0xC) = 0;
        *(s32 *)(var_a0 + 0x10) = 0;
        *(s32 *)(var_a0 + 0x14) = 0;
        *(s32 *)(var_a0 + 0x18) = 0;
        var_a1 += 8;
        *(s32 *)(var_a0 + 0x1C) = 0;
        var_a0 += 0x20;
    } while (var_a1 < 0x88);
}
