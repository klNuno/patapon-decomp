#include "common.h"

extern int sceKernelSignalSema(s32, s32);
extern int sceKernelWaitSemaCB(s32, s32, s32);
u8 func_0895D5BC(s32, s32, s32);

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    u8 *unk_DC;
} T08864850;

u8 func_08864850(T08864850 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 temp;

    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    temp = func_0895D5BC(*(s32 *)(arg0->unk_DC + arg1 * 0x168 + 0x138), arg2, arg3);
    sceKernelSignalSema(arg0->unk_38, 1);
    return temp;
}
