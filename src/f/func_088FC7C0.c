typedef int s32;

extern s32 func_08865EE0(s32);

char *func_088FC7C0(char *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 0) = arg1;
    func_08865EE0((s32) (arg0 + 0x10));
    *(s32 *)(arg0 + 0xA0) = arg2;
    return arg0;
}
