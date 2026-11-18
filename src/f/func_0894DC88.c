typedef int s32;

extern s32 func_0894DDCC(s32);

void func_0894DC88(char *arg0) {
    char *var_v1;

    if ((*(s32 *)(arg0 + 0x4C) == 0) && (*(s32 *)(arg0 + 0x48) == 0)) {
        var_v1 = 0;
    } else {
        var_v1 = arg0 + 0x28;
    }
    if (var_v1 != 0) {
        func_0894DDCC((s32) arg0);
    }
}
