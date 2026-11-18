typedef unsigned char u8;
typedef int s32;

s32 func_0891107C(char *arg0) {
    char *temp_a1;

    temp_a1 = *(char **)(arg0 + 0x170400);
    if (temp_a1 == 0) {
        return -1;
    }
    return (*(u8 *)(temp_a1 + 3) << 0x18) | ((*(u8 *)(temp_a1 + 2) << 0x10) | (*(u8 *)(temp_a1 + 0) | (*(u8 *)(temp_a1 + 1) << 8)));
}
