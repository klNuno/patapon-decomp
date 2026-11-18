typedef int s32;

extern "C" {

typedef struct V0C_0 { virtual void vfunc_08(); virtual void vfunc_0C(s32, s32, s32, s32); } V0C_0;
extern s32 func_0881E750(s32);

void func_0885E020(char **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0 == 0) {
        func_0881E750(arg1);
        return;
    }
    ((V0C_0 *) (arg0))->vfunc_0C(arg3, arg4, arg1, arg2);
}

}
