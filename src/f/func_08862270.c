#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x15C];
} E_08862270;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    E_08862270 *unk_DC;
} Obj_08862270;

extern int sceKernelWaitSemaCB(s32, s32, s32);
extern int sceKernelSignalSema(s32, s32);
extern int sceKernelDelayThreadCB(s32);
s32 func_08863B6C(Obj_08862270 *, s32, s32, s32, s32, s32, s32, s32, u32, s32);

s32 func_08862270(Obj_08862270 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u32 arg8, s32 arg9) {
    s32 r;
    s32 st;
    s32 t;

    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    t = arg2;
    if (t != 0) {
        t = arg9;
    }
    r = func_08863B6C(arg0, t, arg1, arg2, arg3, arg4, arg5, arg7, arg8, arg6);
    sceKernelSignalSema(arg0->unk_38, 1);
    if (arg1 != 0 && r >= 0) {
        sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
        st = ((E_08862270 *)((u8 *)arg0->unk_DC + r * 0x168))->unk_08;
        sceKernelSignalSema(arg0->unk_38, 1);
        while (st != 6) {
            sceKernelDelayThreadCB(10000);
            sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
            st = ((E_08862270 *)((u8 *)arg0->unk_DC + r * 0x168))->unk_08;
            sceKernelSignalSema(arg0->unk_38, 1);
        }
    }
    return r;
}
