typedef int s32;
typedef unsigned int u32;

s32 func_088A87C4(char *arg0) {
    u32 temp_v0;

    temp_v0 = *(u32 *)(arg0 + 4);
    if (temp_v0 < 5U) {
        return ((s32 *)(arg0 + 0x18))[temp_v0];
    }
    return 0;
}
