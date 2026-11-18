typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(s32); } V10_0;
extern s32 func_08858BD8(void);

void func_089B4130(s32 arg0) {
    char **temp_v0;

    temp_v0 = (char **) (func_08858BD8());
    ((V10_0 *) (temp_v0))->vfunc_10(arg0);
}

}
