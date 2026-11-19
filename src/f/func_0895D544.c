#include "common.h"

s32 sceKernelWaitSema(s32, s32, u32 *);
s32 sceKernelSignalSema(s32, s32);

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0C[4];
    u32 unk_10;
    u8 pad_14[4];
    u32 unk_18, unk_1C;
    s32 unk_20;
} S;

s32 func_0895D544(S *arg0) {
    volatile s32 temp;
    s32 ret;
    u32 a, b, c;
    sceKernelWaitSema(temp = arg0->unk_20, 1, NULL);
    a = arg0->unk_08;
    ret = a - arg0->unk_1C;
    if (ret > 0) {
        b = arg0->unk_18;
        c = arg0->unk_10;
        if (c < b) {
            ret = b - c;
        } else {
            ret = a - c;
        }
    }
    sceKernelSignalSema(temp, 1);
    return ret;
}
