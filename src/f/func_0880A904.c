typedef int s32;

extern s32 func_0880A0E8(s32);
extern s32 func_0880A8FC(s32);

s32 func_0880A904(s32 arg0) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;

    temp_s0 = func_0880A8FC(arg0);
    temp_v1 = temp_s0 - func_0880A0E8(arg0);
    var_v0 = temp_v1 >> 2;
    if (temp_v1 < 0) {
        var_v0 = (s32) (temp_v1 + 3) >> 2;
    }
    return var_v0;
}
