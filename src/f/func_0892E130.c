typedef int s32;

extern s32 func_0881F5C0(s32, s32, s32);

char *func_0892E130(char *arg0) {
    *(s32 *)(arg0 + 0x24) = 0;
    *(s32 *)(arg0 + 0x28) = 0;
    func_0881F5C0((s32) arg0, 0, 0x24);
    return arg0;
}
