typedef int s32;
typedef float f32;

extern int func_08974068(void *, f32);
extern int func_089740D0(void *, s32);

void func_08974844(char *arg0, s32 arg1, f32 fparg0) {
    func_089740D0(arg0 + 0x144, 0);
    *(s32 *)(arg0 + 0x16C) = arg1;
    func_08974068(arg0 + 0x144, fparg0);
}
