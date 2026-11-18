typedef signed char s8;
typedef int s32;

extern s32 func_08956920(s32, s32);

void func_089837B8(char *arg0) {
    *(s8 *)(arg0 + 0x38C) = 0;
    func_08956920(*(s32 *)(arg0 + 0x2C), 0);
    *(s8 *)(arg0 + 0x1CC) = 1;
}
