typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_0885356C(s32, s32, s32, s32);

void func_088E6AA4(char *arg0, s32 arg1) {
    s32 temp_v0;
    char *temp_a0;

    temp_v0 = func_0885356C(arg1, 0, 1, 4);
    temp_a0 = *(char **)(arg0 + 0x14);
    if (temp_a0 != 0) {
        *(s32 *)(temp_v0) = (s32) *(s32 *)(temp_a0 + 0x25688);
    }
    func_08852F00(arg1, 0);
}
