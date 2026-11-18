typedef int s32;

extern s32 func_0895C9DC(s32);

s32 func_0895C944(s32 arg0) {
    if (func_0895C9DC(arg0) != 0) {
        return *(s32 *)((*(s32 *)(arg0 + 0x88) + (*(s32 *)(arg0 + 0x28) * 4)));
    }
    return 0;
}
