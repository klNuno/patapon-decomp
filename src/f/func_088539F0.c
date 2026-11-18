typedef int s32;

s32 func_088539F0(char *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *(s32 *)(arg0 + 0x360);
    *(s32 *)(arg0 + 0x360) = arg1;
    return temp_v0;
}
