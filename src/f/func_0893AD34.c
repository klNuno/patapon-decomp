typedef int s32;

extern s32 func_0893A83C(s32, void *);
extern s32 func_0893AD9C(void *, s32, s32);

s32 func_0893AD34(s32 *arg0, char *arg1, s32 arg2) {
    s32 sp1C;

    func_0893A83C((s32) &sp1C, arg1 + 0x2020);
    func_0893AD9C(arg1 + 0x2020, sp1C, arg2);
    *arg0 = (int) (arg1 + 0x2020);
    *arg0 = *(s32 *)(arg1 + 0x2024);
    return 0;
}
