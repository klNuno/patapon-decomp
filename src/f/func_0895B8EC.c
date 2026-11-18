typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

extern s32 func_0895B940(s32);

void func_0895B8EC(char *arg0, s32 arg1) {
    if ((*(s32 *)(arg0 + 4) != 0) || (*(u8 *)(arg0 + 0) != 1)) {
        *(s8 *)(arg0 + 1) = 0;
        if (arg1 != 0) {
            func_0895B940((s32) arg0);
        }
        *(u8 *)(arg0 + 0) = 1U;
        *(s32 *)(arg0 + 4) = 0;
    }
}
