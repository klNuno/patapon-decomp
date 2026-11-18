typedef int s32;

extern s32 func_0894D0C4(s32, s32);
extern s32 func_0894E258(s32);

s32 func_0894D9B4(s32 arg0, s32 arg1) {
    func_0894D0C4(arg0, arg1);
    func_0894E258(arg0 + 0x110);
    *(s32 *)(arg0 + 0x104) = 0x40C00000;
    return arg0;
}
