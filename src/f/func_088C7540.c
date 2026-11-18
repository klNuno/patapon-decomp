typedef int s32;

void func_088C7540(char *arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0) {
        *(s32 *)(arg0 + 0x80) = arg2;
        *(s32 *)(arg0 + 0x7C) = arg1;
    }
}
