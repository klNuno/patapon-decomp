#include "common.h"

void func_08820C24(char *, ...);
s32 sceKernelCreateCallback(const char *, s32 (*)(s32, s32, void *), void *);
s32 sceKernelRegisterExitCallback(s32);
s32 sceImposeSetUMDPopup(s32);
extern s32 D_08858620(s32, s32, void *);
extern char D_089F88E4[];
extern char D_089F88E8[];
extern s32 D_08A5B91C[];
extern s32 D_08A5B920[];

void func_08858678(s32 arg0, s32 arg1) {
    func_08820C24(D_089F88E4);
    sceKernelRegisterExitCallback(sceKernelCreateCallback(D_089F88E8, D_08858620, NULL));
    sceImposeSetUMDPopup(1);
    D_08A5B91C[0] = arg0;
    D_08A5B920[0] = arg1;
}
