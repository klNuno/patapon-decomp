typedef signed char s8;
typedef int s32;

extern s32 func_0880B728(s32);

void func_0880B5CC(char *arg0, s32 arg1) {
    *(s8 *)(arg0 + 0x4C) = 1;
    if (arg1 != 0) {
        func_0880B728((s32) arg0);
    }
}
