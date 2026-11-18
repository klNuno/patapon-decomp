typedef short s16;
typedef int s32;

extern int func_0880416C(s32);
extern int func_08865F78(s32, s32);

s32 func_088FC800(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        func_08865F78(arg0 + 0x10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
