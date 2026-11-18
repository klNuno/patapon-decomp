typedef int s32;

extern s32 func_0886E838(s32, void *);
extern s32 func_0886EE30(void *, s32, s32);

s32 func_0886EDC8(s32 *arg0, char *arg1, s32 arg2) {
    s32 sp1C;

    func_0886E838((s32) &sp1C, arg1 + 0x420);
    func_0886EE30(arg1 + 0x420, sp1C, arg2);
    *arg0 = (int) (arg1 + 0x420);
    *arg0 = *(s32 *)(arg1 + 0x424);
    return 0;
}
