typedef int s32;

s32 func_08914A7C(char *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = *(s32 *)(arg0 + 0x38);
    if (temp_v1 < 0) {
        return -1;
    }
    if (temp_v1 == 2) {
        temp_v0 = *(s32 *)(arg0 + 0x5E8);
        if (temp_v0 == 0) {
            return temp_v0;
        }
    }
    return temp_v1;
}
