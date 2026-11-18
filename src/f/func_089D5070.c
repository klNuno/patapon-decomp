typedef int s32;

extern s32 func_08913614(s32);
extern s32 func_089D52A4(s32, s32);

char *func_089D5070(char *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 0) = arg1;
    *(s32 *)(arg0 + 4) = arg2;
    func_089D52A4((s32) (arg0 + 8), (s32) arg0);
    *(s32 *)(arg0 + 0x48) = 0;
    func_08913614((s32) (arg0 + 0x50));
    *(s32 *)(arg0 + 0xA0) = 0x3F000000;
    *(s32 *)(arg0 + 0xB8) = 0;
    *(s32 *)(arg0 + 0xB4) = 0;
    *(s32 *)(arg0 + 0xB0) = 0;
    *(s32 *)(arg0 + 0xBC) = 0;
    *(s32 *)(arg0 + 0xA0) = 0x3F000000;
    return arg0;
}
