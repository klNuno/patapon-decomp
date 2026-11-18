typedef signed char s8;
typedef int s32;

extern s32 func_08827C78(s32, s32);
extern s32 func_088824D0(s32, s32);

void func_08882480(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_088824D0(arg1, -1);
        func_08827C78(arg0, arg1);
    }
    *(s8 *)(arg0 + 0x84) = 1;
}
