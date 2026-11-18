typedef int s32;
typedef unsigned int u32;

s32 func_088C6CA4(char *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != 0) {
        var_v0 = ((u32) *(u32 *)(arg0 + 4) >> 4) & 1;
    }
    return var_v0;
}
