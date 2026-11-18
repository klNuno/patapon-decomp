typedef unsigned char u8;
typedef int s32;

extern s32 func_088221B0(s32);

s32 func_0880D5C8(char *arg0) {
    s32 temp_v0;
    u8 *temp_v1;
    char *temp_a0;
    char *temp_v1_2;

    temp_v1_2 = *(char **)(arg0 + 0x24);
    temp_v0 = *(s32 *)(temp_v1_2 + 4) - 1;
    *(s32 *)(temp_v1_2 + 4) = temp_v0;
    if (temp_v0 < 0) {
        return func_088221B0((s32) *(char **)(arg0 + 0x24));
    }
    temp_a0 = *(char **)(arg0 + 0x24);
    temp_v1 = *(u8 **)(temp_a0 + 0);
    *(u8 **)(temp_a0 + 0) = (u8 *) (temp_v1 + 1);
    return (s32) *temp_v1;
}
