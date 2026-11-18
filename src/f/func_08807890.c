typedef int s32;

s32 func_08807890(char *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *(s32 *)(arg0 + 0x3C);
    *(s32 *)(arg0 + 0x3C) = arg1;
    return temp_v0;
}
