typedef int s32;

void func_089801AC(char *arg0) {
    char **temp_v1;
    char *temp_a2;

    temp_a2 = *(char **)(arg0 + 4);
    if (temp_a2 != 0) {
        if (arg0 != 0) {
            temp_v1 = (char **) (*(s32 *)(temp_a2 + 0x10228) + (*(s32 *)(temp_a2 + 0x1022C) * 4));
            if (temp_v1 != 0) {
                *temp_v1 = arg0;
            }
            *(s32 *)(temp_a2 + 0x1022C) = (s32) (*(s32 *)(temp_a2 + 0x1022C) + 1);
        }
        *(char **)(arg0 + 4) = 0;
    }
}
