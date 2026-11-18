typedef int s32;

extern "C" {

typedef struct V0C_0 { virtual void vfunc_08(); virtual void vfunc_0C(); } V0C_0;
extern s32 func_0890B0B0(s32);
extern s32 func_0890DBD8(s32);

void func_0890B53C(char **arg0) {
    ((V0C_0 *) (arg0))->vfunc_0C();
    func_0890DBD8((s32) ((char *) arg0 + 0xDA0));
    func_0890B0B0((s32) ((char *) arg0 + 0x7F008));
}

}
