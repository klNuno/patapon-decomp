#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    s32 unk_80;
} Elem_08863F00;

typedef struct {
    u8 pad_00[0x13C];
    s32 unk_13C;
    s32 unk_140;
    u8 pad_144[0x24];
} Slot_08863F00;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    Slot_08863F00 *unk_DC;
    u8 pad_E0[0x668];
    Elem_08863F00 *unk_748;
    u8 pad_74C[0xAFC];
    u8 unk_1248[0x4];
} Obj_08863F00;

typedef struct {
    u16 unk_00;
    s16 unk_02;
    s32 unk_04;
    s32 unk_08;
} Res1_08861F68;

extern int sceKernelWaitSemaCB(s32, s32, s32);
extern int sceKernelSignalSema(s32, s32);
Res1_08861F68 *func_0896A6C4(void *, s32);
s32 func_08863B6C(Obj_08863F00 *, s32, s32, s32, s32, s32, s32, s32, u16, char *);
extern char D_08A88158[];

void func_08863F00(Obj_08863F00 *arg0, s32 arg1) {
    Res1_08861F68 *res;
    Elem_08863F00 *e;
    s32 p;
    s32 r;
    s32 a;
    s32 b;

    p = arg1;
    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    res = func_0896A6C4(arg0->unk_1248, arg1);
    if (res != NULL) {
        if (res->unk_02 >= 0) {
            e = &arg0->unk_748[res->unk_02];
            if (e->unk_80 != 0) {
                p = (s32)e;
            }
        }
        a = res->unk_04;
        b = res->unk_08;
        if (res->unk_00 != 1) {
            sceKernelSignalSema(arg0->unk_38, 1);
            return;
        }
    } else {
        sceKernelSignalSema(arg0->unk_38, 1);
        return;
    }
    r = func_08863B6C(arg0, arg1, 0, p, 0, a, b, res->unk_02, res->unk_00, D_08A88158);
    if (r >= 0) {
        Slot_08863F00 *slot = &arg0->unk_DC[r];
        slot->unk_13C = 0x1FE;
        slot->unk_140 = 0;
    }
    sceKernelSignalSema(arg0->unk_38, 1);
}
