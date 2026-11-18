typedef int s32;

extern void sceKernelWaitEventFlag(s32, s32, s32, s32, s32);

void func_0895D164(char *arg0) {
    sceKernelWaitEventFlag(*(s32 *)(arg0 + 0x8), 2, 0, 0, 0);
}
