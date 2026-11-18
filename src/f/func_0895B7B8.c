typedef int s32;

extern void sceKernelSignalSema(s32, s32);

void func_0895B7B8(char *arg0) {
    sceKernelSignalSema(*(s32 *)arg0, 1);
}
