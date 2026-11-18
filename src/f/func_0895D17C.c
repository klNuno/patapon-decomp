typedef int s32;

extern void sceKernelSetEventFlag(s32);

void func_0895D17C(char *arg0) {
    sceKernelSetEventFlag(*(s32 *)(arg0 + 0x8));
}
