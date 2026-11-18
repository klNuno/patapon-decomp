typedef int s32;

void func_088DA618(char *arg0, s32 *arg1) {
    s32 *temp_a2;

    temp_a2 = (int *) (*(s32 *)(arg0 + 0x30) + (*(s32 *)(arg0 + 0x34) * 4));
    if (temp_a2 != 0) {
        *temp_a2 = *arg1;
    }
    *(s32 *)(arg0 + 0x34) = (s32) (*(s32 *)(arg0 + 0x34) + 1);
}
