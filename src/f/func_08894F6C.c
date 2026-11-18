typedef signed char s8;
typedef int s32;

extern s32 func_0889C8C4(void *, s32);
extern s32 func_088A4F1C(void *, void *);

s32 func_08894F6C(char *arg0, s32 arg1) {
    s32 var_v0;

    *(s8 *)(arg0 + 0x98B4) = 0;
    var_v0 = func_0889C8C4((arg0 + 0x77E0), arg1) & 0xFF;
    if (var_v0 != 0) {
        var_v0 = func_088A4F1C((arg0 + 0x7810), (arg0 + 0x77E0)) & 0xFF;
    }
    return var_v0;
}
