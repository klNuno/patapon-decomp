typedef int s32;
typedef float f32;

extern s32 func_088A42A0(s32, s32);

void func_0889C51C(char *arg0, f32 fparg0) {
    if (*(f32 *)(arg0 + 0x8C) != fparg0) {
        func_088A42A0(*(s32 *)(arg0 + 0xA0), (s32) arg0);
        *(f32 *)(arg0 + 0x8C) = fparg0;
    }
}
