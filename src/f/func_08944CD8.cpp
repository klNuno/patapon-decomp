typedef int s32;

extern "C" {

typedef struct V14_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual s32 vfunc_14(); } V14_0;
typedef struct V0C_1 { virtual void vfunc_08(); virtual void vfunc_0C(s32, s32, s32, s32, s32); } V0C_1;

void func_08944CD8(char **arg0, s32 arg1, s32 arg2, s32 arg3) {
    ((V0C_1 *) (arg0))->vfunc_0C(((V14_0 *) (arg0))->vfunc_14(), arg2, arg3, 0, -1);
}

}
