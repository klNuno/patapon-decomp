typedef unsigned char u8;
typedef int s32;

extern s32 func_088D1B9C(s32);

s32 func_08888E0C(s32 arg0) {
    s32 var_v0;

    var_v0 = func_088D1B9C(arg0) != 0;
    if (var_v0 != 0) {
        var_v0 = *(u8 *)(arg0 + 0x9F8) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = *(u8 *)(arg0 + 0x9F9) != 0;
    }
    return var_v0;
}
