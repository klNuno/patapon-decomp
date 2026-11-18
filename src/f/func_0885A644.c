typedef int s32;
typedef float f32;

void func_0885A644(char *arg0, f32 fparg0, f32 fparg1) {
    char *temp_a1;

    temp_a1 = *(char **)(arg0 + 0x10);
    *(f32 *)(temp_a1 + 0) = fparg0;
    *(f32 *)(temp_a1 + 4) = fparg1;
    *(s32 *)(temp_a1 + 8) = 0;
    *(char **)(arg0 + 0x10) = (char *) (temp_a1 + 0xC);
    *(s32 *)(arg0 + 4) = (s32) (*(s32 *)(arg0 + 4) | 0x800180);
    *(s32 *)(arg0 + 0x14) = (s32) (*(s32 *)(arg0 + 0x14) + 1);
}
