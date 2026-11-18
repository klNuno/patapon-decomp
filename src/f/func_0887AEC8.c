typedef int s32;

extern s32 func_0887B2F8(s32);

void func_0887AEC8(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x24) = arg1;
    *(s32 *)(arg0 + 0x28) = arg1;
    func_0887B2F8((s32) arg0);
    *(s32 *)(arg0 + 0x24) = arg1;
    func_0887B2F8((s32) arg0);
}
