typedef int s32;

s32 func_089BD764(s32 arg0) {
    *(s32 *)(arg0 + 0x44) = (s32) (arg0 + (arg0 & 3));
    *(s32 *)(arg0 + 0x48) = 0;
    return arg0;
}
