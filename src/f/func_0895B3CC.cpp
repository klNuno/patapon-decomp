typedef int s32;

extern "C" {

typedef struct V08_0 { virtual s32 vfunc_08(s32, s32); } V08_0;
extern s32 func_0895B5A0(s32);
extern s32 func_0895B5A8(s32);

s32 func_0895B3CC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    char **temp_a0;

    func_0895B5A0(arg0);
    temp_a0 = *(char ***)(arg0 + 8);
    temp_s0 = ((V08_0 *) (temp_a0))->vfunc_08(arg1, arg2);
    func_0895B5A8(arg0);
    return temp_s0;
}

}
