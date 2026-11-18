typedef int s32;

extern s32 func_08885F0C(s32);
extern s32 func_08886B18(void *, s32);

void func_08885EC0(char *arg0) {
    s32 *temp_v0;

    temp_v0 = (int *) (func_08886B18((arg0 + 0x120), *(s32 *)(arg0 + 0x11C) + *(s32 *)(arg0 + 0x118)));
    if (*temp_v0 & 0x1000) {
        func_08885F0C((s32) arg0);
        return;
    }
    *(s32 **)(arg0 + 0x108) = temp_v0;
}
