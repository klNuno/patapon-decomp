typedef int s32;

extern "C" {

typedef struct V08_0 { virtual s32 vfunc_08(s32, s32); } V08_0;

void func_0885A294(char *arg0, s32 arg1) {
    char **temp_a0;

    temp_a0 = *(char ***)(arg0 + 4);
    *(s32 *)(arg0 + 0) = ((V08_0 *) (temp_a0))->vfunc_08(arg1 << 6, 0x10);
}

}
