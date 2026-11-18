typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(char **); } V10_0;
typedef struct V08_1 { virtual void vfunc_08(s32); } V08_1;

void func_08891578(char **arg0, char **arg1) {
    if (arg0 != 0) {
        ((V08_1 *) (arg0))->vfunc_08(-1);
        ((V10_0 *) (arg1))->vfunc_10(arg0);
    }
}

}
