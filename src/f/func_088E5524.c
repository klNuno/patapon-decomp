typedef unsigned char u8;
typedef int s32;

extern s32 func_0890ABC8(s32);

s32 func_088E5524(char *arg0) {
    if (*(u8 *)(arg0 + 0xEC) != 0) {
        return func_0890ABC8((s32) (arg0 + 0x2C0));
    }
    return 1;
}
