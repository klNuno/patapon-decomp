typedef int s32;

extern s32 func_088112F4(s32, s32, s32);
extern s32 func_08811450(s32);

void func_08811408(s32 arg0, s32 arg1) {
    s32 sp1C;

    sp1C = func_08811450(arg1);
    func_088112F4(arg0, arg1, (s32) &sp1C);
}
