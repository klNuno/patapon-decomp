typedef int s32;
typedef float f32;

extern s32 func_0882BE88(s32);
extern s32 func_0882C338(s32, s32);

f32 func_0893F020(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = func_0882C338(*arg0, func_0882BE88(*arg0));
    if (temp_v0 == 0) {
        return 0.0f;
    }
    return *(f32 *)(temp_v0 + 0x30);
}
