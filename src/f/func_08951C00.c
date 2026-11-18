typedef int s32;
typedef unsigned int u32;

s32 func_08951C00(char *arg0) {
    s32 var_v0;
    u32 temp_v1;

    temp_v1 = *(u32 *)(arg0 + 0x1E8);
    var_v0 = temp_v1 != 0;
    if (var_v0 != 0) {
        var_v0 = *(s32 *)(arg0 + 0x25F0) >= 0;
    }
    if (var_v0 != 0) {
        var_v0 = temp_v1 < (u32) (*(s32 *)(arg0 + 0x25F0) + 0xF);
    }
    return var_v0;
}
