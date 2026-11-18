typedef int s32;

extern void func_088270C4(s32, s32, s32, s32, s32);

void func_08828418(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_088270C4(arg0, arg1, arg2, arg3, arg4);
    *(s32 *)(arg0 + 0x10) = (s32) ((*(s32 *)(arg0 + 0) - arg0) - 0x1C);
}
