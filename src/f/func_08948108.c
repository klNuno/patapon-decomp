typedef signed char s8;
typedef int s32;

extern s32 func_088148F0(s32, s32);
extern s32 func_08959754(s32);

void func_08948108(char *arg0) {
    func_088148F0(4, 0);
    func_08959754((int) (arg0 + 0x1620));
    *(s32 *)(arg0 + 0x1AC74) = 0;
    *(s8 *)(arg0 + 0x1AC7C) = 1;
}
