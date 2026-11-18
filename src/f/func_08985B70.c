typedef signed char s8;
typedef int s32;

extern s32 func_088D6E14(s32, s32);

void func_08985B70(char *arg0) {
    func_088D6E14((s32) (arg0 + 0x2A48), *(s32 *)(arg0 + 0x2A44));
    *(s8 *)(arg0 + 0x2D40) = 0;
}
