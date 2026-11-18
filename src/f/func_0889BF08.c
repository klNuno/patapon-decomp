typedef signed char s8;
typedef int s32;

extern s32 func_088A4138(s32, s32);

void func_0889BF08(char *arg0) {
    func_088A4138(*(s32 *)(arg0 + 0xA0), (s32) arg0);
    *(s8 *)(arg0 + 0x54) = 1;
}
