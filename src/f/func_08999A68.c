typedef signed char s8;
typedef int s32;

extern s32 func_0881F5C0(s32, s32, s32);

void func_08999A68(char *arg0) {
    func_0881F5C0((int) (arg0 + 0xFE8), 0, 0x40);
    *(s32 *)(arg0 + 0xF98) = 0;
    *(s32 *)(arg0 + 0x1028) = -1;
    *(s8 *)(arg0 + 0xF28) = 0;
    *(s8 *)(arg0 + 0x10C4) = 1;
}
