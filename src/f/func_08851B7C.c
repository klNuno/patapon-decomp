typedef int s32;

extern int func_08852F00(s32, s32);
extern int func_08853894(s32, char *);

void func_08851B7C(s32 arg0, s32 arg1) {
    char sp10[0x100];

    func_08853894(arg1, sp10);
    func_08852F00(arg1, 0);
}
