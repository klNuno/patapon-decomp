typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_0885356C(s32, s32, s32, s32);

void func_08904AD8(char *arg0, s32 arg1) {
    *(s32 *)((char *)(*(char **)(arg0 + 0x10)) + 0xA1750) = (s32) *(s32 *)(func_0885356C(arg1, 0, 1, 4));
    func_08852F00(arg1, 0);
}
