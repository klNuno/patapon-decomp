typedef signed char s8;
typedef int s32;

extern s32 func_0881F5C0(s32, s32, s32);

void func_0894DC3C(char *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)(arg0 + 0x7C) = arg1;
    *(s32 *)(arg0 + 0x24) = arg2;
    *(s32 *)(arg0 + 0x20) = arg3;
    func_0881F5C0((s32) (arg0 + 0x28), 0, 0x50);
    *(s32 *)(arg0 + 0x78) = 0;
    *(s8 *)(arg0 + 0x81) = 0;
    *(s8 *)(arg0 + 0x82) = 0;
    *(s8 *)(arg0 + 0x80) = 0;
}
