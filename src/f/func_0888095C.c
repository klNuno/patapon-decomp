typedef int s32;

extern s32 func_08880868(s32, void *);

void func_0888095C(char *arg0) {
    *(s32 *)(arg0 + 0x78) = 0;
    *(s32 *)(arg0 + 0x7C) = -1;
    *(s32 *)(arg0 + 0x80) = 0x7DCCCCCC;
    *(s32 *)(arg0 + 0x84) = 0x7DCCCCCC;
    *(s32 *)(arg0 + 0x88) = 0xFDCCCCCC;
    *(s32 *)(arg0 + 0x8C) = 0xFDCCCCCC;
    if (*(s32 *)(arg0 + 0x70) != 0) {
        func_08880868((s32) arg0, (arg0 + 0x20));
        func_08880868((s32) arg0, (arg0 + 0x48));
    }
    *(s32 *)(arg0 + 0x70) = 0;
}
