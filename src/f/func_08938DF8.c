typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_08950BC4(s32);

void func_08938DF8(char *arg0, s32 arg1) {
    func_08950BC4(*(s32 *)(arg0 + 0x10) + 0x1D50);
    func_08852F00(arg1, 0);
}
