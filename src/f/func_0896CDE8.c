typedef int s32;

s32 func_0896CDE8(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;

    var_a0 = arg0;
    var_v0 = -1;
    var_a2 = 0;
    do {
        if ((var_a0 + 0x20) == arg1) {
            var_v0 = var_a2;
        }
        var_a2 += 1;
        var_a0 += 0x130;
    } while (var_a2 < 0x800);
    return var_v0;
}
