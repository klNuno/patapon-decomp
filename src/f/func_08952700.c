typedef int s32;

extern void func_088A3E4C(char *, s32);

void func_08952700(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x1e0) = 0;
    func_088A3E4C(arg0 + 0x25cc, arg1);
}
