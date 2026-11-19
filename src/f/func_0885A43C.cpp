#include "common.h"

extern "C" {
typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 unk_10;
} T;

void sceKernelDcacheWritebackAll(void);
void func_08813F4C(s32, s32, s32, s32, void *);

void func_0885A43C(T *arg0) {
    if (arg0->unk_0C > 0) {
        sceKernelDcacheWritebackAll();
        func_08813F4C(0, arg0->unk_00, 0, 0x20, &arg0->unk_10);
    }
}
}
