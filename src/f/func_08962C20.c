typedef int s32;

s32 func_08962C20(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;

    var_a0 = arg0;
    var_v0 = -1;
    var_a2 = 0;
    do {
        if ((var_a0 + 0x1C) == arg1) {
            var_v0 = var_a2;
        }
        var_a2 += 1;
        var_a0 += 4;
    } while (var_a2 < 0x3E8);
    return var_v0;
}
