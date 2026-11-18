typedef signed char s8;
typedef int s32;

void func_089D5840(char *arg0) {
    s32 temp_a1;
    s32 var_v1;

    *(s8 *)(arg0 + 0x24) = 0;
    temp_a1 = *(s32 *)(arg0 + 0x30);
    if (temp_a1 == 1) {
        var_v1 = 2;
        *(s32 *)(arg0 + 0x30) = var_v1;
    } else {
        if (temp_a1 == 3) {
            var_v1 = 4;
            *(s32 *)(arg0 + 0x30) = var_v1;
        }
    }
}
