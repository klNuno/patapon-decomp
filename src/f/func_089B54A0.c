typedef int s32;

extern s32 func_089B5568(s32);

char *func_089B54A0(s32 arg0, s32 arg1) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s32 *)(arg0 + 0x26C8) = (s32) (((arg0 + 0x1F08) & 3) + arg0 + 0x1F08);
    *(s32 *)(arg0 + 0x26CC) = 0;
    func_089B5568((s32) arg0);
    return (char *) (arg0);
}
