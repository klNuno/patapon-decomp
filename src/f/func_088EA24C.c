typedef int s32;

extern void func_08852F00(s32, s32);

void func_088EA24C(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x10) = 0;
    func_08852F00(arg1, 0);
}
