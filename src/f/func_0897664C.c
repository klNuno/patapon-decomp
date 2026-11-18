typedef int s32;

extern s32 func_0885A680(void);
extern s32 func_0897669C(s32, s32);

void func_0897664C(char *arg0, s32 arg1) {
    s32 *temp_s0;

    *(s32 *)(arg0 + 4) = 0;
    *(s32 *)(arg0 + 8) = 0;
    *(s32 *)(arg0 + 4) = arg1;
    func_0897669C((s32) arg0, 0);
    temp_s0 = *(s32 **)(arg0 + 0xC);
    *temp_s0 = func_0885A680();
    *(s32 *)(arg0 + 0) = 1;
}
