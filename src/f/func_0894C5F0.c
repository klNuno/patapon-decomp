typedef unsigned char u8;
typedef int s32;

extern s32 func_0894C1B4(s32, s32);
extern s32 func_0894C3B4(s32);

void func_0894C5F0(char *arg0, s32 arg1) {
    if (*(u8 *)((char *)(*(char **)(arg0 + 0)) + 0x20) == 0) {
        func_0894C1B4((s32) arg0, arg1);
        func_0894C3B4((s32) arg0);
        *(s32 *)(arg0 + 0x2028) = (s32) (*(s32 *)(arg0 + 0x2028) ^ 1);
    }
}
