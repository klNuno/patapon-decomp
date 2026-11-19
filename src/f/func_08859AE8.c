#include "common.h"

extern u32 sceKernelGetSystemTimeLow(void);
extern u32 D_08A872F4[];

void func_08859AE8(s32 arg0) {
    if (arg0 == 0xFFFF) {
        D_08A872F4[0] = sceKernelGetSystemTimeLow();
    }
}
