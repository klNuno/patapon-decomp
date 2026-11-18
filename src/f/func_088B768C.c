typedef signed char s8;
typedef int s32;

extern s32 func_088B7324(s32, s32, s32);

void func_088B768C(s32 arg0, s32 arg1) {
    func_088B7324(arg0, arg1, 0);
    *(s8 *)(arg0 + 0x1A4) = 1;
    *(s8 *)(arg0 + 0x1A6) = 1;
}
