typedef unsigned char u8;
typedef int s32;

s32 func_088A2028(char *arg0) {
    s32 var_v0;

    var_v0 = *(u8 *)(arg0 + 8) != 0;
    if (var_v0 == 0) {
        var_v0 = *(u8 *)(arg0 + 9) != 0;
    }
    return var_v0 ^ 1;
}
