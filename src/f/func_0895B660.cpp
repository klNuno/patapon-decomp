typedef int s32;

extern "C" {

typedef struct V24_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual void vfunc_1C(); virtual void vfunc_20(); virtual s32 vfunc_24(); } V24_0;
extern s32 func_0895B7A8(void *);
extern s32 func_0895B7B8(void *);

s32 func_0895B660(char *arg0) {
    s32 temp_s0;
    char **temp_a0;

    func_0895B7A8(arg0 + 4);
    temp_a0 = *(char ***)(arg0 + 8);
    temp_s0 = ((V24_0 *) (temp_a0))->vfunc_24();
    func_0895B7B8((arg0 + 4));
    return temp_s0;
}

}
