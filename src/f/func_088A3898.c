typedef int s32;

s32 func_088A3898(s32 arg0) {
    *(s32 *)(arg0 + 0x14) = (s32) (arg0 + (arg0 & 3));
    *(s32 *)(arg0 + 0x18) = 0;
    return arg0;
}
