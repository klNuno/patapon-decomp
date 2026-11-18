typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_0885A680(void);

void func_089A73DC(char *arg0, s32 arg1) {
    char *temp_s0;
    char *temp_v0;

    temp_v0 = *(char **)(arg0 + 0x10);
    if (temp_v0 != 0) {
        temp_s0 = *(char **)(temp_v0 + 0x110);
        if (temp_s0 != 0) {
            *(s32 *)(temp_s0 + 0xE0) = func_0885A680();
        }
    }
    func_08852F00(arg1, 0);
}
