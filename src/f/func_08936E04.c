typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_08897AB4(s32);

void func_08936E04(char *arg0, s32 arg1) {
    func_08897AB4(*(s32 *)(arg0 + 0x14));
    func_08852F00(arg1, 0);
}
