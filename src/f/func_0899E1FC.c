typedef int s32;
typedef unsigned int u32;

extern s32 func_0881F5C0(s32, s32, s32);

void func_0899E1FC(char *arg0) {
    u32 var_s1;
    char *var_s0;

    var_s0 = arg0;
    var_s1 = 0;
    do {
        *(s32 *)(var_s0 + 0xA0) = -1;
        *(s32 *)(var_s0 + 0xA4) = -1;
        *(s32 *)(var_s0 + 0x140) = -1;
        *(s32 *)(var_s0 + 0x144) = -1;
        *(s32 *)(var_s0 + 0x1E0) = -1;
        *(s32 *)(var_s0 + 0x1E4) = -1;
        *(s32 *)(var_s0 + 0x220) = 0;
        *(s32 *)(var_s0 + 0x1F8) = 0;
        func_0881F5C0((s32) (var_s0 + 0x1FC), 0, 0x20);
        *(s32 *)(var_s0 + 0x1F0) = 0;
        var_s1 += 1;
        *(s32 *)(var_s0 + 0x1F4) = 0;
        var_s0 += 0x220;
    } while (var_s1 < 3U);
}
