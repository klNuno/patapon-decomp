typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_08910E64(s32);

void func_088FA214(char *arg0, s32 arg1) {
    func_08910E64(*(s32 *)((char *)(*(char **)(arg0 + 0x10)) + 0xB21EC));
    func_08852F00(arg1, 0);
}
