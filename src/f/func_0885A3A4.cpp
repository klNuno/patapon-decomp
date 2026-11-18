typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(s32); } V10_0;

void func_0885A3A4(char *arg0) {
    s32 temp_a1;
    char **temp_a0;

    temp_a0 = *(char ***)(arg0 + 8);
    if (temp_a0 != 0) {
        temp_a1 = *(s32 *)(arg0 + 0);
        if (temp_a1 != 0) {
            ((V10_0 *) (temp_a0))->vfunc_10(temp_a1);
        }
    }
    *(s32 *)(arg0 + 0) = 0;
    *(s32 *)(arg0 + 4) = 0;
    *(s32 *)(arg0 + 0xC) = 0;
}

}
