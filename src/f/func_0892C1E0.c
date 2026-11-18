typedef signed char s8;
typedef int s32;

extern s32 func_08882F6C(s32, s32);
extern s32 func_08932B7C(s32, s32);

void func_0892C1E0(char *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 0x40C);
    if (temp_a0 != 0) {
        func_08882F6C(temp_a0, 0);
    }
    func_08932B7C((s32) arg0, 0);
    *(s8 *)(arg0 + 0x3BC) = 0;
    *(s8 *)(arg0 + 0x3D8) = 1;
}
