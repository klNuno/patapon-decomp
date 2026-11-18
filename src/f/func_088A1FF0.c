typedef signed char s8;
typedef int s32;

extern s32 func_088A280C(s32);

void func_088A1FF0(char *arg0) {
    func_088A280C((int) (arg0 + 0x20));
    *(s8 *)(arg0 + 9) = 0;
    *(s32 *)(arg0 + 4) = 0;
}
