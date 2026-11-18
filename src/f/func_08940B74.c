typedef int s32;

s32 func_08940B74(s32 arg0) {
    *(s32 *)(arg0 + 0x84) = (s32) (arg0 + (arg0 & 3));
    *(s32 *)(arg0 + 0x88) = 0;
    return arg0;
}
