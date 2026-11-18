typedef int s32;

extern s32 func_08810E90(s32);

s32 func_08811C6C(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;

    temp_s0 = func_08810E90(arg0);
    temp_v1 = temp_s0 - func_08810E90(arg1);
    var_v0 = temp_v1 >> 4;
    if (temp_v1 < 0) {
        var_v0 = (s32) (temp_v1 + 0xF) >> 4;
    }
    return var_v0;
}
