#include "common.h"

extern "C" {
void sceKernelDcacheWritebackAll(void);
void func_089D6CE0(void *, s32);

void func_089D6C60(void *arg0, s32 arg1, s32 arg2) {
    sceKernelDcacheWritebackAll();
    switch (arg2) {
    case 0:
        func_089D6CE0(arg0, 2);
        break;
    case -1:
    case 1:
    case 2:
        func_089D6CE0(arg0, 0);
        break;
    }
}
}
