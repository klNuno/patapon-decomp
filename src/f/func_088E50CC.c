typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

extern int func_08864E80(char *, char *);

void func_088E50CC(char *arg0, char *arg1) {
    u32 var_s1;
    char *var_s0;

    *(f32 *)(arg0 + 0x2B8) = (f32) *(f32 *)(arg1 + 0x30);
    *(f32 *)(arg0 + 0x2BC) = (f32) *(f32 *)(arg1 + 0x34);
    if (*(u8 *)(arg0 + 0xEC) == 1) {
        var_s0 = arg0;
        var_s1 = 0;
        do {
            func_08864E80(var_s0 + 0xF0, arg1);
            var_s1 += 1;
            var_s0 += 0x90;
        } while (var_s1 < 3U);
    }
}
