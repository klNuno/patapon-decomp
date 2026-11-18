typedef unsigned char u8;
typedef int s32;

extern s32 func_088596E4(s32);
extern s32 func_0887E964(s32, s32, s32);

void func_0887E53C(char *arg0, s32 arg1) {
    if (*(u8 *)(arg0 + 4) != 0) {
        func_088596E4(*(s32 *)(arg0 + 0x20));
        func_0887E964((s32) (arg0 + 0x28), arg1, *(s32 *)(arg0 + 0x20));
    }
}
