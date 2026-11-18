typedef unsigned char u8;
typedef int s32;

extern s32 func_088951B4(s32, s32, s32, s32);

s32 func_08895420(char *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (*(u8 *)(arg0 + 0x92EC) == 0) {
        return 0;
    }
    return func_088951B4((s32) arg0, arg1, arg2, arg3);
}
