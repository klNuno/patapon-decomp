typedef int s32;

extern "C" {

typedef struct V08_0 { virtual s32 vfunc_08(s32, s32); } V08_0;

char *func_088612E0(char *arg0, s32 arg1, char ***arg2) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    char **temp_a0;

    *(s32 *)(arg0 + 0) = 0;
    *(s32 *)(arg0 + 4) = arg1;
    *(char ***)(arg0 + 8) = (char **) *arg2;
    temp_v0 = *(s32 *)(arg0 + 4);
    if (temp_v0 != 0) {
        temp_a0 = *(char ***)(arg0 + 8);
        var_v0 = ((V08_0 *) (temp_a0))->vfunc_08(temp_v0 * 0x10, 0x20);
        *(s32 *)(arg0 + 0) = var_v0;
        temp_v1 = var_v0 + (*(s32 *)(arg0 + 4) * 0x10);
        do {
            var_v0 += 0x10;
        } while (var_v0 != temp_v1);
    }
    return arg0;
}

}
