typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

extern int func_08882F6C(s32);

void func_0892C7B8(char *arg0, s8 arg1) {
    if (*(s32 *)(arg0 + 0x40C) != 0) {
        *(s8 *)(arg0 + 0x5CE) = arg1;
        if (*(u8 *)(arg0 + 0x3A0) == 0) {
            func_08882F6C(*(s32 *)(arg0 + 0x40C));
        }
    }
}
