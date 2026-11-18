#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x15C];
} E_08862270;

typedef struct {
    u8 pad_00[0x80];
    s32 unk_80;
} E;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    E_08862270 *unk_DC;
    u8 pad_E0[0x668];
    E *unk_748;
    u8 pad_74C[0xAFC];
    u8 unk_1248[4];
} Obj_08862270;

typedef struct {
    u16 unk_00;
    s16 unk_02;
    u32 unk_04;
    s32 unk_08;
} Res1_08861F68;

extern int sceKernelWaitSemaCB(s32, s32, s32);
extern int sceKernelSignalSema(s32, s32);
extern int sceKernelDelayThreadCB(s32);
Res1_08861F68 *func_0896A6C4(void *, s32);
s32 func_08863B6C(Obj_08862270 *, s32, s32, s32, s32, s32, s32, s32, u32, s32);

static inline s32 f(Obj_08862270 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u32 arg5, s32 arg6, s32 arg7, u32 arg8, s32 arg9) {
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

s32 func_088623E0(Obj_08862270 *arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4, s32 arg5, s32 arg6) {
    volatile u32 n;
    Res1_08861F68 *r;
    E *e;
    s32 p;
    s32 i;
    s32 arg7;
    s32 arg8;

    r = func_0896A6C4(arg0->unk_1248, arg2);
    if (r != NULL) {
        i = r->unk_02;
        p = arg2;
        if (i >= 0) {
            e = &arg0->unk_748[i];
            if (e->unk_80 != 0) {
                p = (s32)e;
            }
        }
        if (arg4 == 0 || r->unk_04 < arg4) {
            arg4 = r->unk_04;
        }
        n = r->unk_00;
        arg7 = (s16)i;
        arg8 = r->unk_08;
        arg8 += arg5;
        return f(arg0, arg1, p, arg3, arg4, arg8, arg6, arg7, n, arg2);
    }
    return f(arg0, arg1, arg2, arg3, arg4, 0, arg6, -1, 0, arg2);
}
