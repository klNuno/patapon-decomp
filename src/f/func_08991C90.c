typedef signed char s8;
typedef int s32;

void func_08991C90(char *arg0) {
    s32 temp_a1;
    s32 var_v1;

    *(s8 *)(arg0 + 0x434) = 0;
    temp_a1 = *(s32 *)(arg0 + 0x440);
    if (temp_a1 == 1) {
        var_v1 = 2;
        *(s32 *)(arg0 + 0x440) = var_v1;
    } else {
        if (temp_a1 == 3) {
            var_v1 = 4;
            *(s32 *)(arg0 + 0x440) = var_v1;
        }
    }
}
