typedef int s32;
typedef unsigned int u32;

s32 func_08951BCC(char *arg0, u32 arg1) {
    s32 var_v0;

    var_v0 = arg1 != 0;
    if (var_v0 != 0) {
        var_v0 = *(s32 *)(arg0 + 0x25F0) >= 0;
    }
    if (var_v0 != 0) {
        var_v0 = arg1 < (u32) (*(s32 *)(arg0 + 0x25F0) + 0xF);
    }
    return var_v0;
}
