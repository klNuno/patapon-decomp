typedef signed char s8;
typedef int s32;

extern void func_088B9E0C(char *, char *, s32);

void func_088B9DD8(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x54) = arg1;
    *(s32 *)(arg0 + 0x58) = arg1;
    *(s8 *)(arg0 + 0x5c) = 0;
    func_088B9E0C(arg0, arg0 + 0x70, *(s32 *)(arg0 + 0x54));
}
