typedef unsigned char u8;
typedef int s32;

s32 func_089D1AEC(char *arg0) {
    s32 *var_v0;
    s32 temp_v1_2;
    char *temp_v1;

    temp_v1 = *(char **)(arg0 + 0x8494);
    if ((*(u8 *)(temp_v1 + 0x969) != 0) && (temp_v1_2 = *(s32 *)(temp_v1 + 0x920), (temp_v1_2 >= 0))) {
        var_v0 = (int *) (*(s32 *)(arg0 + 0x8484) + (temp_v1_2 * 0x424));
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return *var_v0;
    }
    return -1;
}
