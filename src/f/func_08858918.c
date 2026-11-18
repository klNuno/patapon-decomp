typedef int s32;

void func_08858918(char *arg0, s32 arg1) {
    s32 temp_a3;

    if (arg1 != 0) {
        temp_a3 = *(s32 *)(arg0 + 0x20004);
        *(s32 *)(arg0 + 0x20004) = (s32) (temp_a3 + 1);
        ((s32 *)(arg0 + 0x10004))[temp_a3] = arg1;
    }
}
