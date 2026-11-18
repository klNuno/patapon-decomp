typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_0885A680(void);

void func_0893693C(char *arg0, s32 arg1) {
    char *temp_s0;

    temp_s0 = (char *) (*(s32 *)(arg0 + 0x14) + 0xCF0);
    *(s32 *)(temp_s0 + 0xE0) = func_0885A680();
    func_08852F00(arg1, 0);
}
