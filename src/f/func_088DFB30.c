typedef int s32;

extern void func_08864C5C(void);

void func_088DFB30(char *arg0) {
    func_08864C5C();
    *(s32 *)(arg0 + 0x58) = 0;
    *(s32 *)(arg0 + 0x5C) = 0x42B00000;
}
