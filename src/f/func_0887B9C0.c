typedef int s32;

extern s32 func_08835CF4(void);
extern s32 func_0883DC68(s32);

void func_0887B9C0(char *arg0) {
    func_08835CF4();
    *(s32 *)(arg0 + 4) = func_0883DC68(0);
}
