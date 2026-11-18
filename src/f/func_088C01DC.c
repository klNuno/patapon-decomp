typedef int s32;

extern void func_088BFDE4(char *);

void func_088C01DC(char *arg0) {
    *(s32 *)(arg0 + 0x9c) = 0;
    *(s32 *)(arg0 + 0xa0) = 0;
    *(s32 *)(arg0 + 0x98) = 0;
    *(s32 *)(arg0 + 0x94) = 0;
    *(s32 *)(arg0 + 0xa4) = 0;
    func_088BFDE4(arg0 + 0xa8);
}
