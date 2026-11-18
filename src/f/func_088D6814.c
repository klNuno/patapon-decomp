typedef int s32;
typedef float f32;

char *func_088D6814(char *arg0, char *arg1) {
    *(f32 *)(arg0 + 0) = (f32) *(f32 *)(arg1 + 0);
    *(f32 *)(arg0 + 4) = (f32) *(f32 *)(arg1 + 4);
    *(f32 *)(arg0 + 8) = (f32) *(f32 *)(arg1 + 8);
    *(f32 *)(arg0 + 0xC) = (f32) *(f32 *)(arg1 + 0xC);
    *(f32 *)(arg0 + 0x10) = (f32) *(f32 *)(arg1 + 0x10);
    *(s32 *)(arg0 + 0x14) = (s32) *(s32 *)(arg1 + 0x14);
    *(s32 *)(arg0 + 0x18) = (s32) *(s32 *)(arg1 + 0x18);
    return arg0;
}
