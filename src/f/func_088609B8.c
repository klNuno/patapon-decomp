#include "common.h"

s32 sceKernelCreateCallback(const char *, s32 (*)(s32, s32, void *), void *);
s32 sceUmdRegisterUMDCallBack(s32);
s32 sceKernelCreateEventFlag(const char *, s32, s32, void *);
s32 func_08860968(s32, s32, void *);
s32 func_088629CC(s32, s32, void *);
extern char D_089F8AE8[];
extern char D_089F8AF8[];
extern char D_089F8B08[];

typedef struct T088609B8 {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} T088609B8;

s32 func_088609B8(T088609B8 *arg0) {
    s32 temp;

    if (arg0->unk_1C == 0) {
        temp = sceKernelCreateCallback(D_089F8AE8, func_08860968, arg0);
        arg0->unk_18 = temp;
        if (temp <= 0) {
            return 0;
        }
        if (sceUmdRegisterUMDCallBack(temp) < 0) {
            return 0;
        }
    }
    if (arg0->unk_1C == 0) {
        arg0->unk_1C = sceKernelCreateCallback(D_089F8AF8, func_088629CC, arg0);
        return 0;
    }
    if (arg0->unk_20 == 0) {
        arg0->unk_20 = sceKernelCreateEventFlag(D_089F8B08, 0x200, 0, NULL);
    }
    return 1;
}
