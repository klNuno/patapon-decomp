typedef int s32;
typedef unsigned int u32;

extern s32 func_0899ED9C(s32);

void func_0899EC54(s32 arg0) {
    s32 var_s0;
    u32 var_a0;

    var_s0 = arg0;
    func_0899ED9C(arg0);
    *(s32 *)(var_s0 + 4) = 0;
    *(s32 *)(var_s0 + 8) = 0;
    var_a0 = 0;
    do {
        *(s32 *)(var_s0 + 0x2C) = 0;
        *(s32 *)(var_s0 + 0x30) = 0;
        *(s32 *)(var_s0 + 0x54) = 0;
        *(s32 *)(var_s0 + 0x58) = 0;
        *(s32 *)(var_s0 + 0x7C) = 0;
        *(s32 *)(var_s0 + 0x80) = 0;
        *(s32 *)(var_s0 + 0xA4) = 0;
        *(s32 *)(var_s0 + 0xA8) = 0;
        *(s32 *)(var_s0 + 0xCC) = 0;
        *(s32 *)(var_s0 + 0xD0) = 0;
        *(s32 *)(var_s0 + 0xF4) = 0;
        var_a0 += 6;
        *(s32 *)(var_s0 + 0xF8) = 0;
        var_s0 += 0xF0;
    } while (var_a0 < 0x12U);
}
