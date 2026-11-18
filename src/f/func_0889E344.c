typedef unsigned char u8;
typedef int s32;

extern s32 func_08992A3C(s32, s32);

s32 func_0889E344(s32 arg0, char *arg1, s32 arg2, char *arg3) {
    s32 temp_v0_2;
    char *temp_v0;

    temp_v0 = *(char **)(arg1 + 0x3A0);
    if ((temp_v0 != 0) && (*(u8 *)(temp_v0 + 0x14CE) != 0)) {
        *(s32 *)(arg3 + 4) = 0;
        return 1;
    }
    temp_v0_2 = *(s32 *)(arg1 + 0x114);
    if (temp_v0_2 != 0) {
        func_08992A3C(temp_v0_2 + 0x14, 7);
    }
    return 0;
}
