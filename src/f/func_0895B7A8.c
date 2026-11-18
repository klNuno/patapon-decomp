typedef int s32;

extern void sceKernelWaitSemaCB(s32, s32, s32);

void func_0895B7A8(char *arg0) {
    sceKernelWaitSemaCB(*(s32 *)arg0, 1, 0);
}
