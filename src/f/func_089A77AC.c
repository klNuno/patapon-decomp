typedef int s32;
typedef float f32;

extern int func_08852F00(s32, s32);
extern f32 *func_0885356C(s32, s32, s32, s32);

void func_089A77AC(char *arg0, s32 arg1) {
    f32 *temp_v0;
    char *temp_v1;
    char *temp_v1_2;

    temp_v0 = func_0885356C(arg1, 0, 1, 4);
    temp_v1 = *(char **)(arg0 + 0x10);
    if (temp_v1 != 0) {
        temp_v1_2 = *(char **)(temp_v1 + 0x110);
        if (temp_v1_2 != 0) {
            *(f32 *)(temp_v1_2 + 0x168) = (f32) *temp_v0;
        }
    }
    func_08852F00(arg1, 0);
}
