typedef signed char s8;
typedef int s32;

extern s32 func_08995090(s32);
extern s32 func_089B9A1C(s32);

void func_089B989C(char *arg0) {
    *(s8 *)(arg0 + 0x1068) = 0;
    func_089B9A1C((s32) arg0);
    func_08995090(*(s32 *)(arg0 + 0x105C));
}
