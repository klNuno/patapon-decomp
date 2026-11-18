#include "common.h"

typedef struct {
    u8 pad_00[0x91];
    u8 unk_91;
    u8 pad_92[0x2D];
    u8 unk_BF;
} U;

typedef struct {
    u8 pad_00[4];
    U *unk_04;
} T;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} S;

s32 *func_0884EBA0(s32, s32);
f32 *func_0884EBB0(s32, s32);
T *func_08852FFC(s32);
s32 func_08853004(s32);

s32 func_0896F1CC(S *arg0) {
    T *t;
    s32 h;

    t = func_08852FFC(arg0->unk_04);
    h = func_08853004(arg0->unk_04);
    if (((t->unk_04->unk_BF >> 3) & 1) == 0) {
        return 0;
    }
    if (((t->unk_04->unk_91 >> 2) & 1) == 1) {
        return 1;
    }
    if (*func_0884EBA0(h, 0x19) == 1) {
        if (*func_0884EBB0(h, 0x15) < 6.8f) {
            return 0;
        }
    } else {
        if (*func_0884EBB0(h, 0x15) < 2.0f) {
            return 0;
        }
    }
    t->unk_04->unk_91 |= 4;
    t->unk_04->unk_BF &= 0xDF;
    t->unk_04->unk_BF &= 0xBF;
    return 1;
}
