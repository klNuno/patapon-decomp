typedef int s32;
typedef float f32;

void func_088D5900(char *arg0, s32 arg1, s32 arg2, char *arg3) {
    *(s32 *)(arg0 + 0x71C) = arg1;
    *(s32 *)(arg0 + 0x720) = arg2;
    *(f32 *)(arg0 + 0x728) = (f32) *(f32 *)(arg3 + 0);
    *(f32 *)(arg0 + 0x72C) = (f32) *(f32 *)(arg3 + 4);
}
