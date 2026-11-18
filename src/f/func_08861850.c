typedef int s32;

extern void sceKernelWaitSemaCB(s32, s32, s32);

void func_08861850(char *arg0) {
    sceKernelWaitSemaCB(*(s32 *)(arg0 + 0x38), 1, 0);
}
