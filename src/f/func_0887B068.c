typedef unsigned char u8;
typedef int s32;

extern s32 func_0887B0A8(s32, s32);

s32 func_0887B068(char *arg0) {
    u8 sp1F;
    s32 var_s0;

    var_s0 = *(s32 *)(arg0 + 0x14);
    sp1F = 0;
    func_0887B0A8((s32) arg0, (s32) &sp1F);
    if (sp1F == 0) {
        var_s0 += 1;
    }
    return var_s0;
}
