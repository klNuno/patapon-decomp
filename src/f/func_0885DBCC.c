typedef int s32;

extern s32 func_0885D7C4(s32);
extern s32 func_0885DC1C(s32);

s32 func_0885DBCC(char *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 0x44);
    if (temp_a0 != 0) {
        func_0885DC1C(temp_a0);
    }
    func_0885D7C4((s32) arg0);
    if (*(s32 *)(arg0 + 0x40) != 0) {
        return 0;
    }
    return 1;
}
