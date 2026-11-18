typedef int s32;

extern int sceKernelSignalSema(s32, s32);
extern int sceKernelWaitSemaCB(s32, s32, s32);

s32 func_08861FFC(char *arg0, s32 arg1, s32 arg2) {
    s32 temp_s2;

    if (arg2 != 0) {
        sceKernelWaitSemaCB(*(s32 *)(arg0 + 0x38), 1, 0);
    }
    temp_s2 = *(s32 *)((char *)((*(s32 *)(arg0 + 0xDC) + (arg1 * 0x168))) + 8);
    if (arg2 != 0) {
        sceKernelSignalSema(*(s32 *)(arg0 + 0x38), 1);
    }
    return temp_s2;
}
