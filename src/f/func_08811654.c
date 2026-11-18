typedef int s32;

extern s32 func_08811614(s32, s32, s32);
extern s32 func_0881169C(s32);

void func_08811654(s32 arg0, s32 arg1) {
    s32 sp1C;

    sp1C = func_0881169C(arg1);
    func_08811614(arg0, arg1, (s32) &sp1C);
}
