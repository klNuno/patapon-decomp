#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} S;

s32 sceKernelClearEventFlag(s32, u32);

s32 func_0895D184(S *arg0, u32 arg1) {
    return sceKernelClearEventFlag(arg0->unk_08, ~arg1);
}
