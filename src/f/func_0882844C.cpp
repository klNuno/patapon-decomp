typedef int s32;

extern "C" {

typedef struct V20_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual void vfunc_1C(); virtual s32 vfunc_20(); } V20_0;
typedef struct V1C_1 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual s32 vfunc_1C(); } V1C_1;

s32 func_0882844C(char *arg0) {
    s32 temp_s0;

    temp_s0 = ((V1C_1 *) (arg0))->vfunc_1C();
    return (temp_s0 - ((V20_0 *) (arg0))->vfunc_20()) - ((*(s32 *)(arg0 + 0x1C) + 1) * 0x1C);
}

}
