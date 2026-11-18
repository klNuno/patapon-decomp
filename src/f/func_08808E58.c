typedef signed char s8;
typedef int s32;

extern s32 func_08806638(s32, s32);
extern s32 func_08808E90(s32, s32);

void func_08808E58(s32 arg0, s32 arg1) {
    func_08806638(arg0, arg1);
    *(s32 *)(arg0 + 0x3C) = 0;
    *(s8 *)(arg0 + 0x40) = func_08808E90(arg0, 0x20);
}
