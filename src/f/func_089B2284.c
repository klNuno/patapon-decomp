typedef int s32;
typedef float f32;

extern void func_089B103C(s32, s32, f32);

void func_089B2284(char *arg0, s32 arg1) {
    func_089B103C(arg1, *(s32 *)(arg0 + 0x54), *(f32 *)(arg0 + 0x1200));
}
