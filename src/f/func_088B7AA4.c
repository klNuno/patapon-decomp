typedef short s16;
typedef int s32;

extern int func_0880416C(s32);
extern int func_08810258(s32, s32);

s32 func_088B7AA4(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        func_08810258(arg0 + 0x104, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
