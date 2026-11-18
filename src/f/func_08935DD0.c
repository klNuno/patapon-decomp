typedef int s32;

extern s32 func_08852F00(s32, s32);
extern s32 func_08897AB4(s32);

void func_08935DD0(char *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 0x14);
    if (temp_a0 != 0) {
        func_08897AB4(temp_a0);
    }
    func_08852F00(arg1, 0);
}
