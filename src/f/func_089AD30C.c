typedef short s16;
typedef int s32;

extern int func_0880416C(char *);
extern int func_089AD694(s32, s32);

char *func_089AD30C(char *arg0, s16 arg1) {
    s32 temp_a0;

    if (arg0 != 0) {
        temp_a0 = *(s32 *)(arg0 + 0x24);
        if (temp_a0 != 0) {
            func_089AD694(temp_a0, *(s32 *)((char *)(*(char **)(arg0 + 0)) + 0x1510));
            *(s32 *)(arg0 + 0x24) = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
