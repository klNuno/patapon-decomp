typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); } V10_0;
extern s32 func_0881E77C(s32);

void func_0885E06C(char **arg0, s32 arg1) {
    if (arg0 == 0) {
        func_0881E77C(arg1);
        return;
    }
    ((V10_0 *) (arg0))->vfunc_10();
}

}
