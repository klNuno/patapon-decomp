typedef signed char s8;
typedef int s32;

extern void func_089A48B0(s32, s32);

void func_089A05AC(char *arg0) {
    *(s8 *)(arg0 + 0x15c) = 0;
    func_089A48B0(*(s32 *)(arg0 + 0x4), *(s32 *)(arg0 + 0xc));
}
