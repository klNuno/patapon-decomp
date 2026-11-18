typedef int s32;

extern s32 func_088A3F6C(s32, s32);

void func_088A3F0C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;

    var_s0 = arg0;
    if (arg0 != arg1) {
        do {
            func_088A3F6C(arg0, arg2);
            var_s0 += 4;
        } while (var_s0 != arg1);
    }
}
