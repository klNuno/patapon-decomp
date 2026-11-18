typedef int s32;

extern s32 func_08914C88(s32);
extern s32 func_089A8AA4(s32);

void func_089A8A7C(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x14) = arg1;
    func_08914C88(func_089A8AA4(arg1));
}
