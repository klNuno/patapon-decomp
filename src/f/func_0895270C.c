typedef int s32;

extern s32 func_0895284C(s32, s32);

void func_0895270C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;

    var_s0 = arg0;
    if (arg0 != arg1) {
        do {
            func_0895284C(arg0, arg2);
            var_s0 += 0x20;
        } while (var_s0 != arg1);
    }
}
