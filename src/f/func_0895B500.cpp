typedef int s32;

extern "C" {

typedef struct V14_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual s32 vfunc_14(); } V14_0;
extern s32 func_0895B5A0(s32);
extern s32 func_0895B5A8(s32);

s32 func_0895B500(s32 arg0) {
    s32 temp_s0;
    char **temp_a0;

    func_0895B5A0(arg0);
    temp_a0 = *(char ***)(arg0 + 8);
    temp_s0 = ((V14_0 *) (temp_a0))->vfunc_14();
    func_0895B5A8(arg0);
    return temp_s0;
}

}
