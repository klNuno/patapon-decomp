#include "common.h"

extern s32 sceKernelWaitSema(s32, s32, u32 *);
extern s32 sceKernelSignalSema(s32, s32);

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
    s32 unk_20;
} T;

s32 func_0895D76C(T *arg0) {
    volatile s32 temp;
    s32 val;
    s32 result;
    sceKernelWaitSema(temp = arg0->unk_20, 1, NULL);
    val = temp;
    result = arg0->unk_1C;
    sceKernelSignalSema(val, 1);
    return result;
}
