typedef signed char s8;
typedef int s32;

extern s32 func_0881F5C0(s32, s32, s32);

s32 func_08885298(s32 arg0) {
    func_0881F5C0(arg0, 0, 0x100);
    *(s32 *)(arg0 + 0x100) = 0xFFFFFF;
    *(s32 *)(arg0 + 0x104) = 0;
    *(s32 *)(arg0 + 0x108) = 0;
    *(s32 *)(arg0 + 0x10C) = 0;
    *(s8 *)(arg0 + 0x110) = 0;
    *(s8 *)(arg0 + 0x111) = 0;
    return arg0;
}
