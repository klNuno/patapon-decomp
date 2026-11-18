typedef int s32;

extern s32 func_08924EB4(s32);
extern s32 func_08924EC0(s32, s32, s32);

s32 func_08924D20(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        return 0;
    }
    if (arg2 < 0) {
        return 0;
    }
    func_08924EB4(arg0);
    func_08924EC0(arg0, arg1, arg2);
    return 1;
}
