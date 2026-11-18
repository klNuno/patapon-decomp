typedef int s32;

extern s32 func_08822B3C(s32, s32);
extern s32 func_0888AFAC(s32);

void func_088761D0(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x20) = func_0888AFAC(arg1);
    func_08822B3C((s32) arg0, arg1);
}
