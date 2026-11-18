typedef int s32;

extern s32 func_088F24B0(s32);

void func_088F2470(s32 arg0) {
    func_088F24B0(arg0);
    *(s32 *)(arg0 + 0x70) = (s32) (*(s32 *)(arg0 + 0x70) | 0x100);
    *(s32 *)(arg0 + 0x6B8) = (s32) *(s32 *)(arg0 + 0x684);
    *(s32 *)(arg0 + 0x6B4) = 0;
    *(s32 *)(arg0 + 0x6BC) = 0;
}
