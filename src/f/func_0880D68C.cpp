typedef int s32;
typedef unsigned int u32;

extern "C" {

typedef struct V3C_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual void vfunc_1C(); virtual void vfunc_20(); virtual void vfunc_24(); virtual void vfunc_28(); virtual void vfunc_2C(); virtual void vfunc_30(); virtual void vfunc_34(); virtual void vfunc_38(); virtual s32 vfunc_3C(u32, s32); } V3C_0;

s32 func_0880D68C(char *arg0) {
    s32 temp_v0;
    u32 var_a0;
    u32 var_v1;

    var_v1 = *(u32 *)(arg0 + 0x30);
    var_a0 = *(u32 *)(arg0 + 0x2C);
    if (var_a0 < var_v1) {
loop_1:
        temp_v0 = ((V3C_0 *) (arg0))->vfunc_3C(*(u32 *)(arg0 + 0x2C), var_v1 - var_a0);
        if (temp_v0 <= 0) {
            return -1;
        }
        var_a0 = *(u32 *)(arg0 + 0x2C) + temp_v0;
        *(u32 *)(arg0 + 0x2C) = var_a0;
        var_v1 = *(u32 *)(arg0 + 0x30);
        if (var_a0 >= var_v1) {
            goto block_6;
        }
        goto loop_1;
    }
block_6:
    return 0;
}

}
