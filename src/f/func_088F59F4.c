typedef int s32;
typedef float f32;

extern s32 func_088F5BDC(s32, s32);

void func_088F59F4(char *arg0) {
    f32 *temp_v1;

    temp_v1 = *(f32 **)(arg0 + 0x10);
    if (temp_v1 != 0) {
        func_088F5BDC((s32) arg0, (s32) *temp_v1);
    }
}
