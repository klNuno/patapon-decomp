typedef int s32;

s32 func_08962DF0(char *arg0) {
    s32 temp_v1;

    temp_v1 = *(s32 *)(arg0 + 0x60) + 1;
    *(s32 *)(arg0 + 0x60) = temp_v1;
    if (temp_v1 >= 0xFFFF) {
        *(s32 *)(arg0 + 0x60) = 0;
    }
    return *(s32 *)(arg0 + 0x60);
}
