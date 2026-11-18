typedef int s32;

extern s32 func_0899F8B8(s32, s32, s32);

void func_0899F874(char *arg0) {
    s32 temp_a1;

    temp_a1 = *(s32 *)(arg0 + 0x170);
    if (temp_a1 != -1) {
        func_0899F8B8((s32) arg0, temp_a1, 0);
    }
    func_0899F8B8((s32) arg0, *(s32 *)(arg0 + 0xC), 1);
}
