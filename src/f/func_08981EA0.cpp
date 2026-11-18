typedef int s32;

extern "C" {

typedef struct V14_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(); virtual s32 vfunc_14(); } V14_0;
extern int func_08981A7C(char *, s32, s32, s32);
extern int func_089837F0(char *, s32, char *);

void func_08981EA0(char *arg0, s32 arg1, s32 arg2) {
    if (((V14_0 *) (arg0))->vfunc_14() == 0) {
        func_08981A7C(arg0 + 0x48A0, arg1, *(s32 *)(arg0 + 0xA40) + 8, arg2);
        func_089837F0(arg0 + 0xA50, arg1, arg0 + 0x48A0);
    }
}

}
