typedef int s32;

void func_088C7444(char *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 != 0) {
        *(s32 *)(arg0 + 0x6C) = arg3;
        *(s32 *)(arg0 + 0x64) = arg1;
        *(s32 *)(arg0 + 0x68) = arg2;
    }
}
