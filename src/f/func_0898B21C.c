typedef int s32;

s32 func_0898B21C(char **arg0) {
    char *temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        *(s32 *)(temp_v1 + 0xB21BC) = 0;
        *(s32 *)(temp_v1 + 0xB21C0) = 0;
        *(s32 *)((char *)(*arg0) + 0xB21B8) = 0;
    }
    return 0;
}
