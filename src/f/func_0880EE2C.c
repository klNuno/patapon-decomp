typedef int s32;
typedef unsigned int u32;

extern s32 func_0880E260(s32, s32);
extern s32 func_08810D24(s32, s32);

u32 func_0880EE2C(s32 arg0, s32 arg1, u32 arg2, u32 arg3) {
    u32 var_s0;

    var_s0 = arg2;
    if (arg2 < arg3) {
loop_1:
        if (func_0880E260(func_08810D24(arg0 + 8, (s32) var_s0), arg1) != 0) {
            var_s0 += 4;
            if (var_s0 < arg3) {
                goto loop_1;
            }
        }
    }
    return var_s0;
}
