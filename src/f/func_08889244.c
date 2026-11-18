typedef unsigned char u8;
typedef int s32;

extern s32 func_088B64A4(s32, s32);

void func_08889244(char *arg0, s32 arg1) {
    if (*(u8 *)(arg0 + 0x9F8) != 0) {
        func_088B64A4((s32) (arg0 + 0x670), arg1);
    }
}
