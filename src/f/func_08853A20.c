typedef int s32;

extern s32 func_08853AD4(s32, s32);

void func_08853A20(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;

    var_s0 = arg0;
    if (arg0 != arg1) {
        do {
            func_08853AD4(arg0, arg2);
            var_s0 += 0x10;
        } while (var_s0 != arg1);
    }
}
