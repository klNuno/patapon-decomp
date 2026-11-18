typedef int s32;

void func_089C8DB4(s32 *arg0, char *arg1) {
    char *var_a0;
    char *var_a3;
    s32 temp_a2;

    var_a0 = (char *) (arg0);
    if (var_a0 != arg1) {
        var_a3 = var_a0 + 4;
        if (var_a3 != arg1) {
            do {
                temp_a2 = *(s32 *)var_a0;
                *(s32 *)var_a0 = *(s32 *)var_a3;
                *(s32 *)var_a3 = temp_a2;
                var_a3 += 4;
                var_a0 += 4;
            } while (var_a3 != arg1);
        }
    }
}
