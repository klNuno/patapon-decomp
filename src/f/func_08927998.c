typedef signed char s8;
typedef int s32;

extern s32 func_089278C8(s32);
extern s32 func_08927A14(s32, s32, s32);

s32 func_08927998(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        return 0;
    }
    if (arg2 == 0) {
        return 0;
    }
    func_089278C8(arg0);
    *(s32 *)(arg0 + 0x28) = arg1;
    *(s32 *)(arg0 + 0x2C) = arg2;
    func_08927A14(arg0, arg1, arg2);
    *(s8 *)(arg0 + 0x24) = 1;
    return 1;
}
