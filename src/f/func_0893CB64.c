typedef int s32;

extern s32 func_0881F5C0(s32, s32, s32);
extern s32 func_0893F380(s32);

char *func_0893CB64(char *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s32 *)(arg0 + 4) = 0;
    *(s32 *)(arg0 + 8) = arg2;
    *(s32 *)(arg0 + 0xC) = arg3;
    func_0893F380((s32) (arg0 + 0x10));
    *(s32 *)(arg0 + 0x1C) = 0;
    func_0881F5C0((s32) (arg0 + 0x14), 0, 8);
    return arg0;
}
