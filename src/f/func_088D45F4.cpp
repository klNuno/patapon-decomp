typedef int s32;
typedef float f32;

extern "C" {

typedef struct V18_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(f32, s32); } V18_0;

void func_088D45F4(char *arg0) {
    s32 temp_a1;

    temp_a1 = *(s32 *)(arg0 + 0x718);
    if ((temp_a1 == 4) || (temp_a1 == 2)) {
        ((V18_0 *) (arg0))->vfunc_18(*(f32 *)(arg0 + 0x8DC), temp_a1);
    }
}

}
