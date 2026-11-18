typedef int s32;

extern int sceKernelSignalSema(s32, s32);
extern int sceKernelWaitSemaCB(s32, s32, s32);

void func_08864658(char *arg0, s32 arg1, s32 arg2) {
    char *temp_v1;

    sceKernelWaitSemaCB(*(s32 *)(arg0 + 0x38), 1, 0);
    temp_v1 = (char *) (*(s32 *)(arg0 + 0xDC) + (arg1 * 0x168));
    *(s32 *)(temp_v1 + 0x13C) = 4;
    *(s32 *)(temp_v1 + 0x140) = arg2;
    sceKernelSignalSema(*(s32 *)(arg0 + 0x38), 1);
}
