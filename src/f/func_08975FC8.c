typedef int s32;

extern s32 func_08976020(void);

s32 func_08975FC8(char *arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)(arg0 + 0x28);
    if (temp_v0 < 0) {
        return -1;
    }
    if ((temp_v0 == 0) && !(func_08976020() & 0xFF)) {
        return 3;
    }
    return *(s32 *)(arg0 + 0x28);
}
