typedef int s32;

extern int sceKernelSignalSema(s32, s32);
extern int sceKernelWaitSemaCB(s32, s32, s32);

s32 func_08863E94(char *arg0, s32 arg1) {
    s32 temp_s0;

    sceKernelWaitSemaCB(*(s32 *)(arg0 + 0x38), 1, 0);
    temp_s0 = *(s32 *)((char *)((*(s32 *)(arg0 + 0xDC) + (arg1 * 0x168))) + 0x13C);
    sceKernelSignalSema(*(s32 *)(arg0 + 0x38), 1);
    return temp_s0 != 0;
}
