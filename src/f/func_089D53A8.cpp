typedef int s32;
typedef unsigned int u32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(s32); } V10_0;
extern int func_0893F444(void *);

void func_089D53A8(char *arg0) {
    s32 temp_a1;
    u32 var_s1;
    char **temp_a0;
    char *var_s0;

    func_0893F444(arg0 + 4);
    *(s32 *)(arg0 + 0x30) = 0;
    var_s1 = 0;
    var_s0 = arg0;
    do {
        temp_a1 = *(s32 *)(var_s0 + 8);
        if (temp_a1 != 0) {
            temp_a0 = *(char ***)(arg0 + 0);
            ((V10_0 *) (temp_a0))->vfunc_10(temp_a1);
            *(s32 *)(var_s0 + 8) = 0;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
}

}
