typedef int s32;

extern int func_088743E8(s32, s32, s32, s32);

void func_0894DCD0(char *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 0x7C);
    if (temp_a0 != 0) {
        func_088743E8(temp_a0, 0, 0, 0);
    }
}
