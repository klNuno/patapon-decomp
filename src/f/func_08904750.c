#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
} Unk;

void sceKernelDcacheWritebackAll(void);

void func_08904750(Unk *arg0, s32 arg1, s32 arg2) {
    sceKernelDcacheWritebackAll();
    arg0->unk_50 = arg2;
}
