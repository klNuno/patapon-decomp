typedef signed char s8;
typedef int s32;

void func_088BE1D0(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x48C) = arg1;
    *(s32 *)(arg0 + 0x490) = arg1;
    *(s8 *)(arg0 + 0x494) = 0;
}
