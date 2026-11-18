typedef int s32;

extern s32 func_0881F120(s32, s32, s32);

void func_0887739C(char *arg0) {
    s32 temp_a1;
    char *temp_a2;

    temp_a2 = *(char **)(arg0 + 0x1498);
    *(s32 *)(temp_a2 + 4) = (s32) *(s32 *)(arg0 + 0x2474);
    temp_a1 = *(s32 *)(arg0 + 0x14A0);
    if ((temp_a2 != 0) && (temp_a1 != 0)) {
        func_0881F120((s32) (temp_a2 + 0x2FEF4), temp_a1, 0x22D4);
    }
}
