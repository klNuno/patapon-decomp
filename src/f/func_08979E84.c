typedef int s32;

extern s32 func_089799F8(s32, void *);
extern s32 func_08979EEC(void *, s32, s32);

s32 func_08979E84(s32 *arg0, char *arg1, s32 arg2) {
    s32 sp1C;

    func_089799F8((s32) &sp1C, arg1 + 0x810);
    func_08979EEC(arg1 + 0x810, sp1C, arg2);
    *arg0 = (int) (arg1 + 0x810);
    *arg0 = *(s32 *)(arg1 + 0x814);
    return 0;
}
