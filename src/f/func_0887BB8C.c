typedef int s32;

extern s32 func_0887B8E8(s32, void *);
extern s32 func_0887BBF4(void *, s32, s32);

s32 func_0887BB8C(s32 *arg0, char *arg1, s32 arg2) {
    s32 sp1C;

    func_0887B8E8((s32) &sp1C, arg1 + 0x410);
    func_0887BBF4(arg1 + 0x410, sp1C, arg2);
    *arg0 = (int) (arg1 + 0x410);
    *arg0 = *(s32 *)(arg1 + 0x414);
    return 0;
}
