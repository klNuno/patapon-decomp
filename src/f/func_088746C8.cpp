typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(s32); } V10_0;
extern s32 func_0891B2E4(s32, s32);

void func_088746C8(s32 arg0, char **arg1) {
    if (arg0 != 0) {
        func_0891B2E4(arg0, -1);
        ((V10_0 *) (arg1))->vfunc_10(arg0);
    }
}

}
