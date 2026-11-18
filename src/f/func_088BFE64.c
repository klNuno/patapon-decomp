typedef unsigned char u8;
typedef int s32;

s32 func_088BFE64(char *arg0) {
    s32 temp_a1;

    if (*(u8 *)(arg0 + 0x18) == 0) {
        return 0;
    }
    temp_a1 = *(s32 *)(arg0 + 4);
    if (temp_a1 == 0) {
        return 0;
    }
    return temp_a1 + (*(s32 *)(arg0 + 0xC) * 0x38) + 0x28;
}
