typedef int s32;

extern "C" {

typedef struct V1C_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual s32 vfunc_1C(); } V1C_0;
typedef struct V14_1 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual void vfunc_14(s32, s32); } V14_1;

void func_088E175C(char **arg0) {
    ((V14_1 *) (arg0))->vfunc_14(((V1C_0 *) (arg0))->vfunc_1C(), 0);
}

}
