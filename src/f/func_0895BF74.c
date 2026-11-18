typedef signed char s8;
typedef int s32;

extern int sceKernelClearEventFlag(s32, s32);
extern s32 func_0895C094(s32, s32);

void func_0895BF74(char *arg0) {
    *(s8 *)(arg0 + 0xBC) = 0;
    *(s32 *)(arg0 + 0xCC) = 0;
    *(s32 *)(arg0 + 0xD0) = 0;
    *(s32 *)(arg0 + 0xD4) = 0;
    sceKernelClearEventFlag(*(s32 *)(arg0 + 0xC4), 0);
    func_0895C094((s32) arg0, 1);
}
