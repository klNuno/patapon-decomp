typedef int s32;

void func_0898F94C(char *arg0, s32 *arg1) {
    s32 *temp_a2;

    temp_a2 = (int *) (*(s32 *)(arg0 + 0x110) + (*(s32 *)(arg0 + 0x114) * 4));
    if (temp_a2 != 0) {
        *temp_a2 = *arg1;
    }
    *(s32 *)(arg0 + 0x114) = (s32) (*(s32 *)(arg0 + 0x114) + 1);
}
