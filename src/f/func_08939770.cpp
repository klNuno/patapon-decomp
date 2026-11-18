typedef short s16;
typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(s32); } V10_0;
extern int func_0880416C(char *);
extern int func_089394E4(char *, s32);

char *func_08939770(char *arg0, s16 arg1) {
    char **temp_a0;

    if (arg0 != 0) {
        temp_a0 = *(char ***)(arg0 + 0);
        ((V10_0 *) (temp_a0))->vfunc_10(*(s32 *)(arg0 + 4));
        if ((arg0 + 0x54) != 0) {
            func_089394E4(arg0 + 0x58, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
