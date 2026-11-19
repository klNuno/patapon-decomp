#include "common.h"

#pragma divbyzerocheck on

extern "C" {

s32 sceKernelWaitSema(s32, s32, u32 *);
s32 sceKernelSignalSema(s32, s32);
void sceKernelDcacheWritebackRange(const void *, u32);

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
    u32 unk_08;
    u8 pad_0C[4];
    u32 unk_10;
    u8 pad_14[8];
    u32 unk_1C;
    s32 unk_20;
} Obj_0895D498;

s32 func_0895D544(Obj_0895D498 *);

void func_0895D498(Obj_0895D498 *arg0, u32 arg1) {
    if (arg1 == 0) {
        return;
    }
    volatile s32 temp;
    sceKernelWaitSema(temp = arg0->unk_20, 1, NULL);
    sceKernelDcacheWritebackRange(arg0->unk_04 + arg0->unk_10, arg1);
    arg0->unk_10 = (arg0->unk_10 + arg1) % arg0->unk_08;
    arg0->unk_1C += arg1;
    sceKernelSignalSema(temp, 1);
    if (arg0->unk_1C >= arg0->unk_08) {
        func_0895D544(arg0);
    }
}

}
