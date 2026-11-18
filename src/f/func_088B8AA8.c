typedef int s32;

s32 func_088B8AA8(s32 arg0) {
    *(s32 *)(arg0 + 0x404) = (s32) (arg0 + (arg0 & 3));
    *(s32 *)(arg0 + 0x408) = 0;
    return arg0;
}
