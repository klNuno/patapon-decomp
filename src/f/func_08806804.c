typedef short s16;
typedef int s32;

extern int func_0880416C(char *);
extern int func_08813190(s32);

char *func_08806804(char *arg0, s16 arg1) {
    s32 temp_a0;

    if (arg0 != 0) {
        temp_a0 = *(s32 *)(arg0 + 4);
        if (temp_a0 != 0) {
            func_08813190(temp_a0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
