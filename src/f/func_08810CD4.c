typedef int s32;

extern s32 func_08810BC0(s32, s32, s32);
extern s32 func_08810D1C(s32);

void func_08810CD4(s32 arg0, s32 arg1) {
    s32 sp1C;

    sp1C = func_08810D1C(arg1);
    func_08810BC0(arg0, arg1, (s32) &sp1C);
}
