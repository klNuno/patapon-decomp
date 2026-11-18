typedef int s32;
typedef float f32;

extern s32 func_088AF0B8(s32, s32, s32, s32);

void func_0891AA50(s32 arg0, s32 arg1) {
    char *temp_a0;

    func_088AF0B8(arg1, 0, 0, 1);
    *(s32 *)(arg1 + 4) = 0;
    temp_a0 = *(char **)(arg1 + 8);
    *(f32 *)(arg1 + 0x18) = (f32) (20.0f - *(f32 *)(temp_a0 + 0));
    *(f32 *)(arg1 + 0x1C) = (f32) (20.0f - *(f32 *)(temp_a0 + 4));
}
