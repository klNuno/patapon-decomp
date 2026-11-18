typedef short s16;
typedef int s32;

extern int func_0880416C(s32 *);
extern int sceKernelDeleteSema(s32);

s32 *func_0895B754(s32 *arg0, s16 arg1) {
    if (arg0 != 0) {
        sceKernelDeleteSema(*arg0);
        *arg0 = -1;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
