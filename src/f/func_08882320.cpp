typedef int s32;

extern "C" {

typedef struct V08_0 { virtual s32 vfunc_08(s32, s32); } V08_0;
extern s32 func_08827BB4(s32, s32, s32, s32, s32);
extern s32 func_08882394(s32);

void func_08882320(s32 arg0, char **arg1) {
    s32 temp_v0;

    func_08882394(arg0);
    *(char ***)(arg0 + 0x80) = arg1;
    temp_v0 = ((V08_0 *) (arg1))->vfunc_08(0x14810, 0x10);
    *(s32 *)(arg0 + 0x28) = temp_v0;
    func_08827BB4(arg0, 0x200, 0xA0, temp_v0, 0x10);
    *(char ***)(arg0 + 0x24) = arg1;
    *(s32 *)(arg0 + 0x88) = 0;
}

}
