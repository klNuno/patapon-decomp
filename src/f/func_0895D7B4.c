#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} T;

s32 sceKernelWaitSema(s32, s32, u32 *);
s32 sceKernelSignalSema(s32, s32);

s32 func_0895D7B4(T *arg0) {
    volatile s32 temp;
    s32 val;
    s32 ret;

    val = (temp = arg0->unk_20);
    sceKernelWaitSema(val, 1, NULL);
    ret = arg0->unk_0C;
    sceKernelSignalSema(temp, 1);
    return ret;
}
