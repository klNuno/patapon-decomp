typedef int s32;
typedef float f32;

extern int func_08852F00(s32, s32);
extern f32 *func_0885356C(s32, s32, s32, s32);

void func_08936D08(char *arg0, s32 arg1) {
    *(f32 *)((char *)(*(char **)(arg0 + 0x14)) + 0xE58) = (f32) *func_0885356C(arg1, 0, 1, 4);
    func_08852F00(arg1, 0);
}
