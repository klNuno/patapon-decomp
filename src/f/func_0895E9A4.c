typedef signed char s8;
typedef int s32;

extern s32 func_0895BB40(s32);
extern s32 func_0895BB48(s32);

void func_0895E9A4(s32 arg0, s8 arg1) {
    func_0895BB40(arg0);
    *(s8 *)(arg0 + 0x20) = arg1;
    func_0895BB48(arg0);
}
