#include "common.h"

extern s32 sceKernelWaitSema(s32, s32, u32 *);
extern s32 sceKernelSignalSema(s32, s32);
typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[8];
    s32 unk_10;
    u8 pad_14[0xC];
    s32 unk_20;
} T;

s32 func_0895D448(T *arg0) {
    volatile s32 temp;
    s32 arg = arg0->unk_20;
    s32 result;
    temp = arg;
    sceKernelWaitSema(arg, 1, NULL);
    result = arg0->unk_04 + arg0->unk_10;
    sceKernelSignalSema(temp, 1);
    return result;
}
