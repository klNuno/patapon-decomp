typedef signed char s8;
typedef int s32;

extern s32 func_088C5AD0(s32);

void func_088C5AA4(s32 arg0) {
    func_088C5AD0(arg0);
    *(s8 *)(arg0 + 0x19D0) = 1;
}
