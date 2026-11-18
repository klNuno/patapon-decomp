typedef int s32;

extern s32 func_088112F4(s32, s32, s32);
extern s32 func_088113F4(s32);

void func_088113AC(s32 arg0, s32 arg1) {
    s32 sp1C;

    sp1C = func_088113F4(arg1);
    func_088112F4(arg0, arg1, (s32) &sp1C);
}
