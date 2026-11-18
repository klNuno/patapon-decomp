typedef int s32;

s32 func_088588C4(char *arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1_2 = *(s32 *)(arg0 + 0x20004);
    if ((temp_v1_2 != 0) && (arg1 == 4)) {
        temp_v1 = temp_v1_2 - 1;
        *(s32 *)(arg0 + 0x20004) = temp_v1;
        return ((s32 *)(arg0 + 0x10004))[temp_v1];
    }
    return 0;
}
