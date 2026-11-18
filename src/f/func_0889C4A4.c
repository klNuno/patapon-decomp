typedef int s32;
typedef unsigned int u32;

extern s32 func_088A4320(s32, s32, s32);

void func_0889C4A4(char *arg0, s32 arg1) {
    s32 var_s0;

    *(s32 *)(arg0 + 0x84) = arg1;
    var_s0 = 0;
    do {
        if ((1 << var_s0) & arg1) {
            func_088A4320(*(s32 *)(arg0 + 0xA0), (s32) arg0, var_s0);
        }
        var_s0 += 1;
    } while ((u32) var_s0 < 0x20U);
}
