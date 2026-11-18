typedef int s32;

extern s32 func_0888B1AC(s32, s32, s32);

void func_0888B174(s32 arg0, char **arg1) {
    char *temp_a1;

    temp_a1 = *arg1;
    func_0888B1AC(arg0, (s32) temp_a1, *(s32 *)(temp_a1 + 0x24));
    *(s32 *)(arg0) = 0;
}
