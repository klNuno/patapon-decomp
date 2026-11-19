#include "common.h"

s32 func_088609B8(s32);
s32 func_08861770(s32);
s32 sceKernelDelayThreadCB(u32);
s32 sceKernelCheckCallback(void);

void func_08860A78(void *arg0, s32 *arg1) {
    s32 temp = *arg1;
    if ((u8)func_088609B8(temp) == 0) {
        do {
            sceKernelDelayThreadCB(1000000);
        } while ((u8)func_088609B8(temp) == 0);
    }
    for (;;) {
        sceKernelDelayThreadCB(func_08861770(temp));
        sceKernelCheckCallback();
    }
}
