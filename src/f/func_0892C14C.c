typedef signed char s8;
typedef int s32;
typedef float f32;

extern s32 func_08932B7C(s32, s32);
extern s32 func_089337A4(s32);

void func_0892C14C(s32 arg0, f32 fparg0, f32 fparg1) {
    if ((fparg0 <= 0.0f) && (fparg1 <= 0.0f)) {
        func_089337A4(arg0 + 0x1F0);
        func_08932B7C(arg0, 0);
    }
    *(f32 *)(arg0 + 0x3E0) = fparg1;
    *(f32 *)(arg0 + 0x3C4) = fparg0;
    *(s8 *)(arg0 + 0x3BC) = 1;
}
