typedef int s32;
typedef unsigned int u32;

s32 func_0885AD18(s32 arg0, u32 arg1) {
    s32 var_v0;

    if (arg1 >= 0x10U) {
        var_v0 = 0;
    } else {
        var_v0 = *(s32 *)((arg0 + (arg1 * 4)));
        if (var_v0 == 0) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
