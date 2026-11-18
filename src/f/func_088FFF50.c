typedef signed char s8;
typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_0885356C(s32, s32, s32, s32);

void func_088FFF50(char *arg0, s32 arg1) {
    *(s8 *)((char *)(*(char **)(arg0 + 0x10)) + 0x50588) = (s8) (*(s32 *)(func_0885356C(arg1, 0, 1, 4)) != 0);
    func_08852F00(arg1, 0);
}
