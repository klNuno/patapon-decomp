typedef int s32;
typedef unsigned int u32;

extern "C" {

typedef struct V2C_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual void vfunc_1C(); virtual void vfunc_20(); virtual void vfunc_24(); virtual void vfunc_28(); virtual void vfunc_2C(); } V2C_0;
extern s32 func_0880ADC0(s32);

void func_088088D0(char *arg0) {
    u32 temp_v1;

    temp_v1 = *(u32 *)(arg0 + 8);
    if (temp_v1 < (u32) *(u32 *)(arg0 + 0xC)) {
        *(u32 *)(arg0 + 8) = (u32) (temp_v1 + 1);
        func_0880ADC0((s32) temp_v1);
        return;
    }
    ((V2C_0 *) (arg0))->vfunc_2C();
}

}
