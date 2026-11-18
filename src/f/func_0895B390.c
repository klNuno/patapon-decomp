typedef int s32;

extern s32 func_0895B5A0(s32);
extern s32 func_0895B5A8(s32);

void func_0895B390(s32 arg0, s32 arg1) {
    func_0895B5A0(arg0);
    *(s32 *)(arg0 + 8) = arg1;
    func_0895B5A8(arg0);
}
