typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(s32); } V10_0;
extern s32 func_0895B5A0(s32);
extern s32 func_0895B5A8(s32);

void func_0895B4B4(s32 arg0, s32 arg1) {
    char **temp_a0;

    func_0895B5A0(arg0);
    temp_a0 = *(char ***)(arg0 + 8);
    ((V10_0 *) (temp_a0))->vfunc_10(arg1);
    func_0895B5A8(arg0);
}

}
