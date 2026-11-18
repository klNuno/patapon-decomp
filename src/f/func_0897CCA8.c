typedef int s32;
typedef float f32;

extern s32 func_0897CD60(s32, s32);

void func_0897CCA8(char *arg0, s32 arg1, f32 fparg0) {
    s32 var_a2;
    char *temp_v0;
    char *var_v1;

    if (arg1 == -1) {
        var_a2 = 0;
        var_v1 = arg0;
        do {
            *(f32 *)(var_v1 + 0) = fparg0;
            *(f32 *)(var_v1 + 4) = fparg0;
            *(f32 *)(var_v1 + 0x54) = fparg0;
            *(f32 *)(var_v1 + 0x58) = fparg0;
            *(f32 *)(var_v1 + 0xA8) = fparg0;
            *(f32 *)(var_v1 + 0xAC) = fparg0;
            *(f32 *)(var_v1 + 0xFC) = fparg0;
            *(f32 *)(var_v1 + 0x100) = fparg0;
            *(f32 *)(var_v1 + 0x150) = fparg0;
            var_a2 += 5;
            *(f32 *)(var_v1 + 0x154) = fparg0;
            var_v1 += 0x1A4;
        } while (var_a2 < 0xA);
    } else {
        temp_v0 = arg0 + (arg1 * 0x54);
        *(f32 *)(temp_v0 + 0) = fparg0;
        *(f32 *)(temp_v0 + 4) = fparg0;
    }
    func_0897CD60((s32) arg0, arg1);
}
