typedef int s32;
typedef unsigned int u32;

extern s32 func_088825A4(s32, s32);

void func_08931664(char *arg0) {
    u32 var_s1;
    char *var_s0;

    if (*(s32 *)(arg0 + 0) != 0) {
        var_s1 = 0;
        var_s0 = arg0;
        do {
            func_088825A4(*(s32 *)(arg0 + 0x290), (s32) (var_s0 + 0x10));
            var_s1 += 1;
            var_s0 += 0xA0;
        } while (var_s1 < 4U);
        *(s32 *)(arg0 + 0) = 0;
    }
}
