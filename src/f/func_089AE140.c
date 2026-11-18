typedef unsigned char u8;
typedef int s32;

s32 func_089AE140(char *arg0) {
    s32 var_v0;

    var_v0 = *(u8 *)(arg0 + 0xDA8) == 0;
    if (var_v0 != 0) {
        var_v0 = *(u8 *)(arg0 + 0xDC4) == 0;
    }
    return var_v0;
}
