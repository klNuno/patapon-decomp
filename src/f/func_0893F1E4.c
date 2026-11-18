typedef int s32;

extern s32 func_0881F5C0(s32, s32, s32);

char *func_0893F1E4(char *arg0) {
    *(s32 *)(arg0 + 0) = 0;
    *(s32 *)(arg0 + 0x24) = -1;
    func_0881F5C0((s32) (arg0 + 4), -1, 0x20);
    return arg0;
}
