typedef unsigned char u8;
typedef int s32;

extern s32 func_08853014(s32, s32);

s32 func_088E6678(char *arg0, s32 arg1) {
    if (*(u8 *)(arg0 + 0x4B2) != 0) {
        return func_08853014((s32) arg0, arg1);
    }
    return 1;
}
