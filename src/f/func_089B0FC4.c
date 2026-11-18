typedef int s32;
typedef float f32;

char *func_089B0FC4(char *arg0, s32 arg1, s32 arg2, s32 arg3, char *arg4, s32 arg5) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s32 *)(arg0 + 4) = arg2;
    *(s32 *)(arg0 + 8) = arg3;
    *(s32 *)(arg0 + 0xC) = -1;
    *(f32 *)(arg0 + 0x10) = (f32) *(f32 *)(arg4 + 0);
    *(f32 *)(arg0 + 0x14) = (f32) *(f32 *)(arg4 + 4);
    *(s32 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x1C) = 0;
    *(s32 *)(arg0 + 0x20) = arg5;
    return arg0;
}
