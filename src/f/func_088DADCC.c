typedef int s32;

s32 func_088DADCC(s32 arg0) {
    *(s32 *)(arg0 + 0x104) = (s32) (arg0 + (arg0 & 3));
    *(s32 *)(arg0 + 0x108) = 0;
    return arg0;
}
