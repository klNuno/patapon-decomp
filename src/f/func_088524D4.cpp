#include "common.h"

extern "C" {
u32 sceKernelGetSystemTimeLow(void);
void func_08858498(u8 *, s32);
void func_08852F00(void *, s32);
extern u8 D_08A5AEAC[];
extern u8 D_08A5B870[];

void func_088524D4(void *arg0, void *arg1) {
    func_08858498(D_08A5AEAC, sceKernelGetSystemTimeLow());
    D_08A5B870[0] = 1;
    func_08852F00(arg1, 0);
}
}
