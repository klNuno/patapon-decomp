typedef signed char s8;
typedef int s32;

extern s32 func_08865EE0(s32);
extern s32 func_089457D8(s32);

s32 func_08945934(s32 arg0, s32 arg1) {
    func_089457D8(arg0);
    *(s32 *)(arg0 + 8) = arg1;
    func_08865EE0(arg0 + 0x10);
    *(s8 *)(arg0 + 0xA0) = 1;
    return arg0;
}
