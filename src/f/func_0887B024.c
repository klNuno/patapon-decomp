typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

extern s32 func_0887B188(s32, s32);

u32 func_0887B024(char *arg0) {
    u8 sp1F;
    u32 var_s0;

    var_s0 = (u32) *(u32 *)(arg0 + 0x14) >> 1;
    sp1F = 0;
    func_0887B188((s32) arg0, (s32) &sp1F);
    if (sp1F == 0) {
        var_s0 += 1;
    }
    return var_s0;
}
