typedef signed char s8;
typedef int s32;

extern int sceKernelSignalSema(s32, s32);
extern int sceKernelWaitSemaCB(s32, s32, s32);

void func_088648E4(char *arg0, s32 arg1) {
    sceKernelWaitSemaCB(*(s32 *)(arg0 + 0x38), 1, 0);
    if (arg1 != 0) {
        *(s8 *)(arg0 + 0x3C) = arg1;
    }
    sceKernelSignalSema(*(s32 *)(arg0 + 0x38), 1);
}
