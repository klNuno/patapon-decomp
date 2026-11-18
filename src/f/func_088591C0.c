#include "common.h"

extern u8 D_08A872A4[];
extern s32 D_08A872A0[];
extern char D_089F8910[];
extern char D_089F8920[];

s32 func_08859170(s32, s32, void *);
s32 sceKernelCreateCallback(const char *, void *, void *);
s32 sceKernelDeleteCallback(s32);
s32 sceUmdRegisterUMDCallBack(s32);
s32 sceUmdUnRegisterUMDCallBack(s32);
s32 sceUmdCheckMedium(void);
s32 sceUmdWaitDriveStatCB(s32, s32);
s32 sceUmdActivate(s32, const char *);

s32 func_088591C0(void) {
    s32 ret;

    if (D_08A872A4[0] != 0) {
        return 0;
    }
    ret = D_08A872A0[0] = sceKernelCreateCallback(D_089F8910, func_08859170, NULL);
    if (ret < 0) {
        return ret;
    }
    ret = sceUmdRegisterUMDCallBack(ret);
    if (ret < 0) {
        return ret;
    }
    if (sceUmdCheckMedium() == 0) {
        while (sceUmdWaitDriveStatCB(2, 1000000) != 0) {
        }
    }
    ret = sceUmdActivate(1, D_089F8920);
    if (ret < 0) {
        sceUmdUnRegisterUMDCallBack(D_08A872A0[0]);
        sceKernelDeleteCallback(D_08A872A0[0]);
        return ret;
    }
    while (sceUmdWaitDriveStatCB(0x20, 1000000) != 0) {
    }
    D_08A872A4[0] = 1;
    return ret;
}
