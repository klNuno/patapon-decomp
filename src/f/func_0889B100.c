typedef int s32;
typedef float f32;

extern s32 func_0883B984(s32, s32);
extern s32 func_0883B9C8(void);

void func_0889B100(char *arg0, f32 fparg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 8);
    if (temp_a0 >= 0) {
        if (fparg0 == 0.0f) {
            func_0883B984(temp_a0, 0);
        } else {
            func_0883B9C8();
        }
    }
    *(s32 *)(arg0 + 0) = 0;
    *(s32 *)(arg0 + 8) = -1;
    *(s32 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 0x10) = 0;
}
