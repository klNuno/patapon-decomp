#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    s32 unk_80;
} Elem;

typedef struct {
    u8 pad_00[0x13C];
    s32 unk_13C;
    s32 unk_140;
    u8 pad_144[0x24];
} Slot;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    Slot *unk_DC;
    u8 pad_E0[0x668];
    Elem *unk_748;
    u8 pad_74C[0xAFC];
    u8 unk_1248[0x4];
} Obj;

typedef struct {
    u16 unk_00;
    s16 unk_02;
    s32 unk_04;
    u32 unk_08;
} Res;

extern u8 D_08A88158[];
void sceKernelWaitSemaCB(s32, s32, s32);
void sceKernelSignalSema(s32, s32);
Res *func_0896A6C4(void *, s32);
s32 func_08863B6C(Obj *, s32, s32, s32, s32, s32, s32, s32, u32, void *);
s32 func_08822AD0(void *, void *);

static inline const u32 *min_u32(const u32 *a, const u32 *b) { return (*b < *a) ? b : a; }
static inline const u32 *max_u32(const u32 *a, const u32 *b) { return (*a < *b) ? b : a; }

void func_08864148(Obj *arg0, s32 arg1, s32 arg2) {
    s32 var_s3;
    Res *r1;
    Res *r2;
    Elem *e1;
    Elem *e2;
    Slot *slot;
    s16 i1;
    s16 i2;
    u32 lo;
    u32 n;
    s32 idx;
    u16 type;
    s32 i;

    var_s3 = arg1;
    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    r1 = func_0896A6C4(arg0->unk_1248, arg1);
    r2 = func_0896A6C4(arg0->unk_1248, arg2);
    if (r1 != NULL && r2 != NULL) {
        if (r1->unk_00 != 1 || r2->unk_00 != 1) {
            sceKernelSignalSema(arg0->unk_38, 1);
            return;
        }
        i1 = r1->unk_02;
        if (i1 >= 0) {
            i2 = r2->unk_02;
            if (i2 >= 0 && i1 == i2) {
                e1 = &arg0->unk_748[i1];
                e2 = &arg0->unk_748[i2];
                if (e1->unk_80 != 0 && e2->unk_80 != 0) {
                    if (func_08822AD0(e1, e2) != 0) {
                        sceKernelSignalSema(arg0->unk_38, 1);
                        return;
                    }
                    var_s3 = (s32)e1;
                }
            }
        }
        lo = *min_u32(&r1->unk_08, &r2->unk_08);
        n = *max_u32(&r1->unk_08, &r2->unk_08) - lo;
        idx = r1->unk_02;
        type = r1->unk_00;
        if (type != 1) {
            sceKernelSignalSema(arg0->unk_38, 1);
            return;
        }
    } else {
        sceKernelSignalSema(arg0->unk_38, 1);
        return;
    }
    i = func_08863B6C(arg0, arg1, 0, var_s3, 0, n, lo, idx, type, D_08A88158);
    if (i >= 0) {
        slot = &arg0->unk_DC[i];
        slot->unk_13C = 0x208;
        slot->unk_140 = 0;
    }
    sceKernelSignalSema(arg0->unk_38, 1);
}
