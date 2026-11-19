#include "common.h"

extern char D_08A04CD8[];
s32 sceKernelCreateSema(const char *, s32, s32, s32, void *);

s32 *func_0895B708(s32 *arg0)
{
    *arg0 = -1;
    *arg0 = sceKernelCreateSema(D_08A04CD8, 0, 1, 1, NULL);
    return arg0;
}
