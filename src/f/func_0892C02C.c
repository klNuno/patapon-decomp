typedef int s32;

extern s32 func_0881F120(void *, s32, s32);

void func_0892C02C(char *arg0, s32 arg1) {
    func_0881F120(arg0 + 0x418, arg1, 0x100);
    *(s32 *)(arg0 + 0x414) = (s32) (arg0 + 0x418);
}
