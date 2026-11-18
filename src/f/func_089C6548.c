typedef int s32;
typedef unsigned int u32;

void func_089C6548(char *arg0, char *arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    u32 var_a2;
    char *var_a0;

    var_a0 = arg0;
    *(s32 *)(var_a0 + 0x14) = 0;
    *(s32 *)(var_a0 + 0x10) = arg2;
    *(s32 *)(var_a0 + 0xC) = 0;
    *(s32 *)(var_a0 + 0x1C) = 0;
    if (arg1 == 0) {
        *(char **)(var_a0 + 0) = 0;
        *(s32 *)(var_a0 + 4) = 0;
        *(s32 *)(var_a0 + 8) = 0;
    } else {
        *(char **)(var_a0 + 0) = arg1;
        temp_v1 = *(s32 *)((*(s32 *)(arg1 + 0x44) + (*(s32 *)(var_a0 + 0x10) * 4)));
        *(s32 *)(var_a0 + 4) = temp_v1;
        *(s32 *)(var_a0 + 8) = (s32) (temp_v1 + 0x10);
    }
    *(s32 *)(var_a0 + 0x18) = arg3;
    var_a2 = 0;
    do {
        var_a2 += 1;
        *(s32 *)(var_a0 + 0x20) = -1;
        var_a0 += 4;
    } while (var_a2 < 0x40U);
}
