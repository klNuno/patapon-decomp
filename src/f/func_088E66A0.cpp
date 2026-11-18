typedef int s32;

extern "C" {

typedef struct V0C_0 { virtual void vfunc_08(); virtual s32 vfunc_0C(); } V0C_0;
extern s32 func_0884EBE8(s32, s32, s32);

s32 func_088E66A0(char **arg0, s32 arg1, s32 arg2) {
    func_0884EBE8(((V0C_0 *) (arg0))->vfunc_0C(), arg2 + 0x40, arg1);
    return 1;
}

}
