typedef unsigned char u8;
typedef int s32;

extern s32 func_088E5A3C(s32, s32);
extern s32 func_0890AC48(s32);

void func_088E4CD8(char *arg0, s32 arg1) {
    if (*(u8 *)(arg0 + 0xEC) == 1) {
        func_0890AC48((s32) (arg0 + 0x2C0));
        func_088E5A3C((s32) arg0, arg1);
    }
}
