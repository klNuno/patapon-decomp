#include "common.h"

s32 sceKernelWaitSema(s32, s32, u32 *);
s32 sceKernelSignalSema(s32, s32);

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0C[4];
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1C;
    s32 unk_20;
} T;

void func_0895D3F4(T *arg0) {
    volatile s32 temp;

    sceKernelWaitSema((temp = arg0->unk_20), 1, NULL);
    arg0->unk_1C = 0;
    arg0->unk_18 = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = arg0->unk_08;
    sceKernelSignalSema(temp, 1);
}
