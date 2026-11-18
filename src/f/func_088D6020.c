#include "common.h"

typedef struct {
    s8 unk_00[64];
} C64;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    C64 unk_0C;
} E;

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    E unk_08;
} N;

typedef struct {
    N *unk_00;
} It;

typedef struct {
    u8 pad_00[0xC24];
    N *unk_C24;
    N *unk_C28;
    N *unk_C2C;
    s32 unk_C30;
} S;

extern s32 D_089FBBDC[];
extern C64 D_089FBBE8[];

void func_088D6020(S *arg0, s32 arg1, f32 arg2) {
    E e;
    volatile It a;
    It it;
    N *n;
    N *prev;
    E *p;

    a.unk_00 = (N *)&arg0->unk_C24;
    it = *(It *)&a;
    e.unk_04 = arg1;
    e.unk_08 = arg2;
    n = arg0->unk_C2C->unk_00;
    if (n != arg0->unk_C2C) {
        if (n->unk_00 != NULL) {
            n->unk_00->unk_04 = n->unk_04;
        }
        if (n->unk_04 != NULL) {
            n->unk_04->unk_00 = n->unk_00;
        }
        n->unk_00 = NULL;
        n->unk_04 = NULL;
    } else {
        n = NULL;
    }
    prev = it.unk_00->unk_04;
    arg0->unk_C30++;
    prev->unk_00 = n;
    it.unk_00->unk_04 = n;
    n->unk_00 = it.unk_00;
    n->unk_04 = prev;
    p = &n->unk_08;
    if (p != NULL) {
        e.unk_0C = D_089FBBE8[0];
        e.unk_00 = D_089FBBDC[0];
        *p = e;
    }
}
