#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 pad_18[8];
    u32 unk_20;
} Obj_088CBB58;

typedef struct {
    u8 pad_00[0x10];
} E_088CBB58;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} F_088CBB58;

typedef struct N_088CBB58 {
    s32 unk_00;
    s32 unk_04;
    struct N_088CBB58 **unk_08;
    s32 unk_0C;
    E_088CBB58 *unk_10;
    s32 unk_14;
    F_088CBB58 *unk_18;
    s32 unk_1C;
} N_088CBB58;

void func_088CBF40(void *, s32);
s32 func_088CBD64(u32 *arg0, void *arg1, void *arg2);

u8 func_088CBB58(N_088CBB58 *arg0, Obj_088CBB58 *arg1, Obj_088CBB58 *arg2) {
    u32 hi;
    u32 lo;
    s32 d;
    s32 i;
    s32 j;
    s32 k;
    u8 ret;
    s32 e;
    u32 **q;

    hi = arg1->unk_20;
    lo = arg2->unk_20;
    if (hi < lo) {
        hi = arg2->unk_20;
        lo = arg1->unk_20;
    }
    d = hi - lo;
    for (i = 0; i < arg0->unk_0C; i++) {
        ret = func_088CBB58(arg0->unk_08[i], arg1, arg2);
        func_088CBF40(&arg0->unk_08[i], d);
        if (!ret) {
            return 0;
        }
    }
    e = d;
    if ((arg1->unk_0C & 0x20000000) && arg0->unk_00 == 10) {
        e = arg1->unk_14 - 0x40;
    }
    if (arg0->unk_00 == 3 || arg0->unk_00 == 10) {
        s32 *p = (s32 *)((u32)arg0->unk_10 + ((u32)arg0->unk_14 << 4));
        i = *p;
        for (q = (u32 **)(p + 1); i != 0; i--, q++) {
            if (!func_088CBD64(*q, arg1, arg2)) {
                return 0;
            }
            func_088CBF40(q, e);
        }
    }
    for (j = 0; j < arg0->unk_14; j++) {
        func_088CBF40(&arg0->unk_10[j], d);
    }
    for (k = 0; k < arg0->unk_1C; k++) {
        func_088CBF40(&arg0->unk_18[k].unk_04, d);
    }
    func_088CBF40(&arg0->unk_04, d);
    func_088CBF40(&arg0->unk_08, d);
    func_088CBF40(&arg0->unk_10, d);
    func_088CBF40(&arg0->unk_18, d);
    return 1;
}
