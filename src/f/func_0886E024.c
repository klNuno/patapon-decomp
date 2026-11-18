typedef int s32;

extern s32 func_0886B108(s32, void *);
extern s32 func_0886E08C(void *, s32, s32);

s32 func_0886E024(s32 *arg0, char *arg1, s32 arg2) {
    s32 sp1C;

    func_0886B108((s32) &sp1C, arg1 + 0xA10);
    func_0886E08C(arg1 + 0xA10, sp1C, arg2);
    *arg0 = (int) (arg1 + 0xA10);
    *arg0 = *(s32 *)(arg1 + 0xA14);
    return 0;
}
