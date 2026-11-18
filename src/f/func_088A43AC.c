typedef int s32;

s32 func_088A43AC(s32 arg0) {
    *(s32 *)(arg0 + 0x524) = (s32) (arg0 + (arg0 & 3));
    *(s32 *)(arg0 + 0x528) = 0;
    return arg0;
}
