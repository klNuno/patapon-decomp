#include "common.h"

extern int sceKernelSignalSema(s32, s32);
extern int sceKernelWaitSemaCB(s32, s32, s32);
extern int sceKernelDelayThreadCB(s32);

typedef struct {
    u8 pad_00[0x13C];
    s32 unk_13C;
    s32 unk_140;
    u8 pad_144[0x24];
} E0886455C;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    E0886455C *unk_DC;
} T0886455C;

void func_0886455C(T0886455C *arg0, s32 arg1, s32 arg2) {
    s32 s;
    s32 off;
    E0886455C *e;

    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    off = arg2 * 0x168;
    e = (E0886455C *)((u8 *)arg0->unk_DC + off);
    e->unk_13C = 2;
    e->unk_140 = 0;
    sceKernelSignalSema(arg0->unk_38, 1);
    if (arg1 != 0 && arg2 >= 0) {
        sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
        s = ((E0886455C *)((u8 *)arg0->unk_DC + off))->unk_13C;
        sceKernelSignalSema(arg0->unk_38, 1);
        while (s != 0) {
            sceKernelDelayThreadCB(10000);
            sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
            s = ((E0886455C *)((u8 *)arg0->unk_DC + off))->unk_13C;
            sceKernelSignalSema(arg0->unk_38, 1);
        }
    }
}
