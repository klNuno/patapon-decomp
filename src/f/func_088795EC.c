typedef unsigned char u8;
typedef int s32;

s32 func_088795EC(char *arg0) {
    s32 var_v0;

    var_v0 = *(s32 *)(arg0 + 0x830) == 0;
    if (var_v0 != 0) {
        var_v0 = *(u8 *)(arg0 + 0x10) != 0;
    }
    return var_v0;
}
