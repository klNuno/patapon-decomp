typedef int s32;

extern s32 func_088A85E8(s32);

s32 func_08898428(char *arg0) {
    s32 temp_a0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s0;
    char *temp_v0;

    temp_v0 = *(char **)(arg0 + 0x3B0);
    if (temp_v0 == 0) {
        return -1;
    }
    var_s0 = *(s32 *)(temp_v0 + 0x40);
    temp_v0_2 = *(s32 *)(arg0 + 0x3A0);
    if (temp_v0_2 == 0) {
        return 0;
    }
    temp_a0 = temp_v0_2 + 0x970;
    if (temp_a0 == 0) {
        return 0;
    }
    temp_v0_3 = func_088A85E8(temp_a0);
    if (temp_v0_3 != 0) {
        temp_v1 = *(s32 *)(temp_v0_3 + 0x58);
        if (temp_v1 != -1) {
            var_s0 = temp_v1;
        }
    }
    return var_s0;
}
