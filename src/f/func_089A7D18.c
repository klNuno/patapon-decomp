typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_0899288C(s32, s32);

void func_089A7D18(char *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = *(s32 *)((char *)(*(char **)(arg0 + 0x10)) + 0x114);
    if (temp_v0 != 0) {
        temp_a0 = temp_v0 + 0x14;
        if (temp_a0 != 0) {
            func_0899288C(temp_a0, 6);
        }
    }
    func_08852F00(arg1, 0);
}
