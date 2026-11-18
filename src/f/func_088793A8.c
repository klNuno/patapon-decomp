typedef int s32;

extern s32 func_088A43AC(s32);
extern s32 func_088D6974(s32);

char *func_088793A8(char *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)(arg0 + 0) = arg3;
    *(s32 *)(arg0 + 4) = arg2;
    *(s32 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 0x14) = arg1;
    func_088A43AC((s32) (arg0 + 0x18));
    func_088D6974((s32) (arg0 + 0x544));
    *(s32 *)(arg0 + 0x830) = 0;
    return arg0;
}
