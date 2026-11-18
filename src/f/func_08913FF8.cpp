typedef int s32;

extern "C" {

typedef struct V08_0 { virtual s32 vfunc_08(s32, s32); } V08_0;

void func_08913FF8(char *arg0) {
    char **temp_a0;

    temp_a0 = *(char ***)(arg0 + 4);
    *(s32 *)(arg0 + 0x18) = ((V08_0 *) (temp_a0))->vfunc_08(0x40000, 0x10);
}

}
