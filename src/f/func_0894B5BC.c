typedef int s32;

extern void func_0894BE04(void);

void func_0894B5BC(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x8) = arg1;
    *(s32 *)(arg0 + 0x14) = 0;
    func_0894BE04();
}
