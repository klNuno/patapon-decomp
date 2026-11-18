typedef short s16;
typedef int s32;

extern s32 func_08999BC0(s32, s32);

void func_08999A3C(char *arg0, s32 arg1, char *arg2) {
    *(char **)(arg0 + 4) = arg2;
    if (*(s16 *)(arg2 + 0x24) > 0) {
        func_08999BC0((s32) arg0, arg1 + 0x50);
    }
}
