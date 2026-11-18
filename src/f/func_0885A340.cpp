typedef int s32;

extern "C" {

typedef struct V08_0 { virtual s32 vfunc_08(s32, s32); } V08_0;
extern s32 func_0881F5C0(s32, s32, s32);

void func_0885A340(char *arg0, char **arg1, s32 arg2) {
    *(char ***)(arg0 + 8) = arg1;
    *(s32 *)(arg0 + 0) = ((V08_0 *) (arg1))->vfunc_08(arg2, 0x40);
    *(s32 *)(arg0 + 4) = arg2;
    *(s32 *)(arg0 + 0xC) = 0;
    func_0881F5C0((s32) (arg0 + 0x10), 0, 0x400);
}

}
