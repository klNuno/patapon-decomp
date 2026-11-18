typedef int s32;

extern void sceKernelWaitEventFlag(s32, s32, s32, s32, s32);

void func_0895D11C(char *arg0) {
    sceKernelWaitEventFlag(*(s32 *)(arg0 + 0x4), 1, 0x21, 0, 0);
}
