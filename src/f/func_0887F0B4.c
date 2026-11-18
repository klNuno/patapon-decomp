typedef int s32;

extern s32 func_0887F104(s32, s32);

void func_0887F0B4(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg2 & 0xFF) == 1) {
        func_0887F104(((s32 *)((char *)arg0 + 0x64))[arg1], arg0);
    }
    *(s32 *)(arg0 + 0x60) = arg1;
}
