typedef signed char s8;
typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

extern "C" {

typedef struct V38_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual void vfunc_1C(); virtual void vfunc_20(); virtual void vfunc_24(); virtual void vfunc_28(); virtual void vfunc_2C(); virtual void vfunc_30(); virtual void vfunc_34(); virtual void vfunc_38(s32); } V38_0;
extern s32 func_0880ADC0(s32);

void func_0880872C(char *arg0, s8 arg1) {
    s8 sp1F;
    u32 temp_v1;

    sp1F = arg1;
    temp_v1 = *(u32 *)(arg0 + 0x14);
    if (temp_v1 < (u32) *(u32 *)(arg0 + 0x18)) {
        *(u32 *)(arg0 + 0x14) = (u32) (temp_v1 + 1);
        *(u8 *)(temp_v1) = arg1;
        func_0880ADC0((s32) temp_v1);
        return;
    }
    ((V38_0 *) (arg0))->vfunc_38(func_0880ADC0((s32) &sp1F));
}

}
