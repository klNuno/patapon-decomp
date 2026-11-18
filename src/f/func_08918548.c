typedef int s32;

void func_08918548(char *arg0, s32 arg1) {
    if (arg1 != *(s32 *)(arg0 + 4)) {
        *(s32 *)(arg0 + 0x34E78) = 0;
    }
    *(s32 *)(arg0 + 4) = arg1;
}
