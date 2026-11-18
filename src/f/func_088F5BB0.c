typedef signed char s8;
typedef int s32;

extern void func_088F5BD4(char *);

void func_088F5BB0(char *arg0) {
    *(s32 *)arg0 = 1;
    *(s32 *)(arg0 + 0x4) = 1;
    *(s32 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0xc) = 0;
    *(s8 *)(arg0 + 0x9) = 0;
    func_088F5BD4(arg0);
}
