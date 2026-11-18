typedef signed char s8;
typedef int s32;

extern s32 func_0899419C(s32);
extern s32 func_089A360C(s32);

void func_089A35D0(char *arg0) {
    *(s8 *)(arg0 + 0x1069) = 1;
    *(s8 *)(arg0 + 0x1068) = 0;
    func_0899419C((s32) (arg0 + 0x5004));
    func_089A360C((s32) arg0);
}
