typedef int s32;

extern s32 func_088D4F70(s32, s32);
extern s32 func_0891E298(s32, s32);

void func_0891EBCC(char *arg0, s32 arg1, s32 arg2) {
    if (*(s32 *)(arg0 + 0x718) == 4) {
        func_0891E298(*(s32 *)(arg0 + 0x4E30), arg2);
    }
    func_088D4F70((s32) arg0, arg1);
}
