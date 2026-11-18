typedef int s32;

extern s32 func_0895C054(s32);

s32 func_0895BFBC(s32 arg0) {
    if (func_0895C054(arg0) != 0) {
        return *(s32 *)((*(s32 *)(arg0 + 0x5C) + (*(s32 *)(arg0 + 0xD0) * 4)));
    }
    return 0;
}
