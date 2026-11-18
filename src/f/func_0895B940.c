typedef int s32;

extern int sceKernelDeleteThread(s32);
extern int sceKernelWaitThreadEndCB(s32, s32);

void func_0895B940(char *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 4);
    if (temp_a0 != 0) {
        sceKernelWaitThreadEndCB(temp_a0, 0);
        sceKernelDeleteThread(*(s32 *)(arg0 + 4));
        *(s32 *)(arg0 + 4) = 0;
    }
}
