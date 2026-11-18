typedef int s32;

extern void func_088664DC(s32, s32, s32);

void func_08924EF0(s32 arg0, char *arg1) {
    func_088664DC(arg0, *(s32 *)arg1, *(s32 *)(arg1 + 0x4));
}
