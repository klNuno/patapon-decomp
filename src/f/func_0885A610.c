typedef int s32;
typedef float f32;

void func_0885A610(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    char *temp_v1;

    temp_v1 = *(char **)(arg0 + 0x10);
    *(f32 *)(temp_v1 + 0) = fparg0;
    *(f32 *)(temp_v1 + 4) = fparg1;
    *(f32 *)(temp_v1 + 8) = fparg2;
    *(char **)(arg0 + 0x10) = (char *) (temp_v1 + 0xC);
    *(s32 *)(arg0 + 4) = (s32) (*(s32 *)(arg0 + 4) | 0x180);
    *(s32 *)(arg0 + 0x14) = (s32) (*(s32 *)(arg0 + 0x14) + 1);
}
