typedef int s32;

extern void sceKernelSignalSema(s32, s32);

void func_08861860(char *arg0) {
    sceKernelSignalSema(*(s32 *)(arg0 + 0x38), 1);
}
