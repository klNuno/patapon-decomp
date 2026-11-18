typedef int s32;

extern "C" {

typedef struct V0C_0 { virtual void vfunc_08(); virtual void vfunc_0C(s32, s32, s32, s32, s32); } V0C_0;
extern s32 func_089450E8(s32, s32);

void func_08944D40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ((V0C_0 *) (arg0))->vfunc_0C(func_089450E8(arg0, arg1), arg2, arg3, 0, -1);
}

}
