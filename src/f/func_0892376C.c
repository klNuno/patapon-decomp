typedef int s32;

extern int func_088BFFD8(s32, s32);
extern s32 func_088C0020(s32);

void func_0892376C(s32 arg0, s32 arg1) {
    if (func_088C0020(arg0 + 0x10) == 0) {
        func_088BFFD8(arg0 + 0x10, arg1);
    }
}
