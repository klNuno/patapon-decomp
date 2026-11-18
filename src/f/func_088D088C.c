typedef unsigned char u8;
typedef int s32;

extern s32 func_088CDF18(s32);

void func_088D088C(char *arg0) {
    if (*(u8 *)(arg0 + 0x20) == 1) {
        func_088CDF18((s32) (arg0 + 0x50));
    }
}
