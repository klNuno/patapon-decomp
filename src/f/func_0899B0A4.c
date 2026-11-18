typedef unsigned char u8;
typedef int s32;

s32 func_0899B0A4(char *arg0) {
    s32 var_v0;

    var_v0 = *(u8 *)(arg0 + 0x105C) != 0;
    if (var_v0 == 0) {
        var_v0 = *(u8 *)(arg0 + 0x1040) != 0;
    }
    if (var_v0 == 0) {
        var_v0 = *(u8 *)(arg0 + 0x10B8) != 0;
    }
    return var_v0;
}
