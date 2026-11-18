typedef int s32;
typedef float f32;

extern s32 func_088D5548(s32);

void func_0892CF4C(s32 arg0) {
    func_088D5548(arg0);
    *(f32 *)(arg0 + 0x870) = (f32) *(f32 *)(arg0 + 0x880);
    *(f32 *)(arg0 + 0x874) = (f32) *(f32 *)(arg0 + 0x884);
}
