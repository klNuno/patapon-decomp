typedef unsigned char u8;
typedef int s32;

extern s32 func_0885EEE8(s32);

void func_0886040C(char *arg0) {
    if (*(u8 *)(arg0 + 4) == 0) {
        func_0885EEE8((s32) (arg0 + 0x20));
        *(u8 *)(arg0 + 4) = 1U;
    }
}
