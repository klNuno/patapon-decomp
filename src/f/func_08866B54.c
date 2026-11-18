typedef int s32;
typedef float f32;

void func_08866B54(s32 arg0, s32 arg1, char *arg2) {
    char *temp_v1;

    temp_v1 = (char *) (arg0 + (arg1 * 0x10));
    *(f32 *)(temp_v1 + 0) = (f32) *(f32 *)(arg2 + 0);
    *(f32 *)(temp_v1 + 4) = (f32) *(f32 *)(arg2 + 4);
    *(f32 *)(temp_v1 + 8) = (f32) *(f32 *)(arg2 + 8);
    *(f32 *)(temp_v1 + 0xC) = (f32) *(f32 *)(arg2 + 0xC);
}
