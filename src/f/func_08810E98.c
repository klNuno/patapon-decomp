typedef int s32;

extern s32 func_08810EE0(s32, s32, s32);
extern s32 func_08810F0C(s32);

void func_08810E98(s32 arg0, s32 arg1) {
    s32 sp1C;

    sp1C = func_08810F0C(arg1);
    func_08810EE0(arg0, arg1, (s32) &sp1C);
}
