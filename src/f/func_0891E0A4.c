typedef unsigned char u8;
typedef float f32;

u8 func_0891E0A4(char *arg0, char *arg1) {
    if ((*(u8 *)(arg0 + 0x10) == 1) && (arg1 != 0)) {
        *(f32 *)(arg1 + 0) = (f32) *(f32 *)(arg0 + 0);
        *(f32 *)(arg1 + 4) = (f32) *(f32 *)(arg0 + 4);
        *(f32 *)(arg1 + 8) = (f32) *(f32 *)(arg0 + 8);
        *(f32 *)(arg1 + 0xC) = (f32) *(f32 *)(arg0 + 0xC);
    }
    return *(u8 *)(arg0 + 0x10);
}
