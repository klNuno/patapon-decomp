typedef int s32;
typedef unsigned int u32;

s32 func_088BFE2C(char *arg0, u32 arg1) {
    s32 temp_v1;

    temp_v1 = *(s32 *)(arg0 + 0);
    if (temp_v1 == 0) {
        return 0;
    }
    if (arg1 < (u32) *(u32 *)(arg0 + 0x14)) {
        return *(s32 *)((temp_v1 + (arg1 * 4)));
    }
    return 0;
}
