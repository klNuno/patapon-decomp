typedef signed char s8;
typedef int s32;

extern s32 func_08956920(s32, s32);

void func_08983774(char *arg0) {
    *(s8 *)(arg0 + 0x370) = 0;
    *(s32 *)(arg0 + 0x390) = 0;
    *(s32 *)(arg0 + 0x394) = 0x3E800000;
    *(s8 *)(arg0 + 0x38C) = 1;
    func_08956920(*(s32 *)(arg0 + 0x2C), 1);
    *(s8 *)(arg0 + 0x3F0) = 0;
}
