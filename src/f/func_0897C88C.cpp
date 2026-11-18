typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(char **); } V10_0;
typedef struct V1C_1 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual void vfunc_1C(s32); } V1C_1;

void func_0897C88C(char **arg0, char **arg1) {
    if (arg0 != 0) {
        ((V1C_1 *) (arg0))->vfunc_1C(-1);
        ((V10_0 *) (arg1))->vfunc_10(arg0);
    }
}

}
