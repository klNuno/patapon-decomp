typedef int s32;

s32 func_0889CFB4(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 <= 0) {
        return 0;
    }
    ((s32 *)((char *)arg0 + 0x418))[arg1] = arg2;
    return 1;
}
