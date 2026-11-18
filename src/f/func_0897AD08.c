typedef int s32;

extern s32 func_0897A6F0(s32, void *);
extern s32 func_0897AD70(void *, s32, s32);

s32 func_0897AD08(s32 *arg0, char *arg1, s32 arg2) {
    s32 sp1C;

    func_0897A6F0((s32) &sp1C, arg1 + 0xEF0);
    func_0897AD70(arg1 + 0xEF0, sp1C, arg2);
    *arg0 = (int) (arg1 + 0xEF0);
    *arg0 = *(s32 *)(arg1 + 0xEF4);
    return 0;
}
