typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_0885356C(s32, s32, s32, s32);

void func_089A6964(char *arg0, s32 arg1) {
    s32 temp_v0;
    char *temp_v1;

    temp_v0 = func_0885356C(arg1, 0, 1, 4);
    temp_v1 = *(char **)(arg0 + 0x10);
    if (temp_v1 != 0) {
        *(s32 *)(temp_v0) = (s32) *(s32 *)(temp_v1 + 0xDC);
    }
    func_08852F00(arg1, 0);
}
