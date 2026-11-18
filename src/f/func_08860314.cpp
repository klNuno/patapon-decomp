typedef int s32;

extern "C" {

typedef struct V08_0 { virtual s32 vfunc_08(); } V08_0;

s32 func_08860314(char ***arg0) {
    char **temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 == 0) {
        return 0;
    }
    return ((V08_0 *) (temp_a0))->vfunc_08();
}

}
