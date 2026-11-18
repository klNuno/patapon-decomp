#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    s32 unk_80;
} Elem_08864024;

typedef struct {
    u8 pad_00[0x13C];
    s32 unk_13C;
    s32 unk_140;
    u8 pad_144[0x24];
} Slot_08864024;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    Slot_08864024 *unk_DC;
    u8 pad_E0[0x668];
    Elem_08864024 *unk_748;
    u8 pad_74C[0xAFC];
    u8 unk_1248[0x4];
} Obj_08864024;

typedef struct {
    u16 unk_00;
    s16 unk_02;
    s32 unk_04;
    s32 unk_08;
} Res1_08861F68;

extern u8 D_08A88158[];
void sceKernelWaitSemaCB(s32, s32, s32);
void sceKernelSignalSema(s32, s32);
Res1_08861F68 *func_0896A6C4(void *, s32);
s32 func_08863B6C(Obj_08864024 *, s32, s32, s32, s32, s32, s32, s32, u32, void *);

void func_08864024(Obj_08864024 *arg0, s32 arg1) {
    Res1_08861F68 *temp_v0;
    Elem_08864024 *e;
    Slot_08864024 *slot;
    s32 var_s0;
    s32 i;
    s16 idx;
    s32 a;
    s32 b;
    u16 type;

    var_s0 = arg1;
    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    temp_v0 = func_0896A6C4(arg0->unk_1248, arg1);
    if (temp_v0 != NULL) {
        idx = temp_v0->unk_02;
        if (idx >= 0) {
            e = &arg0->unk_748[idx];
            if (e->unk_80 != 0) {
                var_s0 = (s32)e;
            }
        }
        a = temp_v0->unk_04;
        b = temp_v0->unk_08;
        type = temp_v0->unk_00;
        if (type != 1) {
            sceKernelSignalSema(arg0->unk_38, 1);
            return;
        }
    } else {
        sceKernelSignalSema(arg0->unk_38, 1);
        return;
    }
    i = func_08863B6C(arg0, arg1, 0, var_s0, 0, a, b, idx, type, D_08A88158);
    if (i >= 0) {
        slot = &arg0->unk_DC[i];
        slot->unk_13C = 0x208;
        slot->unk_140 = 0;
    }
    sceKernelSignalSema(arg0->unk_38, 1);
}
