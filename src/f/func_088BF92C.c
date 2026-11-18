typedef short s16;
typedef int s32;

extern int func_0880416C(s32);
extern void func_088BFAA4(s32);

s32 func_088BF92C(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        func_088BFAA4(arg0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
