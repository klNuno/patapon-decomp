typedef signed char s8;
typedef int s32;

s32 func_0893D8FC(s8 *arg0) {
    s32 var_a3;
    s32 var_v0;
    s8 temp_v1;

    var_v0 = -1;
    var_a3 = 0;
    if (*arg0 != 0) {
        do {
            temp_v1 = *(arg0 + var_a3);
            if ((temp_v1 == 0x2F) || (temp_v1 == 0x5C)) {
                var_v0 = var_a3;
            }
            var_a3 += 1;
        } while (*(arg0 + var_a3) != 0);
    }
    return var_v0;
}
