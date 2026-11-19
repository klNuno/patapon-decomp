#include "common.h"

extern "C" {

struct N_08936980 {
    s32 unk_00;
    N_08936980 *unk_04;
    void *unk_08;
};

struct It_08936980 {
    N_08936980 *unk_00;
    int eq1(const It_08936980 &o) const { int r = 0; if (unk_00->unk_08 == o.unk_00->unk_08 && unk_00->unk_04 == *(N_08936980 **)&o.unk_00->unk_04) r = 1; return r; }
    int eq(const It_08936980 &o) const { int r = 0; if (eq1(o) && unk_00->unk_00 == *(s32 *)&o.unk_00->unk_00) r = 1; return r; }
    bool ne(const It_08936980 &o) const { return !(bool)eq(o); }
};

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0x4];
    u8 unk_40;
} D_08936980_t;

typedef struct {
    u8 pad_00[0x20];
    D_08936980_t *unk_20;
} C_08936980;

struct E_08936980 {};

struct B_08936980 {
    u8 pad_00[0x28];
    N_08936980 unk_28;
    It_08936980 begin(const E_08936980 &, const E_08936980 &, const E_08936980 &) { It_08936980 r; r.unk_00 = unk_28.unk_04; return r; }
    It_08936980 end() { It_08936980 r; r.unk_00 = &unk_28; return r; }
};

typedef struct {
    u8 pad_00[0x8];
    B_08936980 *unk_08;
} A_08936980;

struct G_08936980 {
    u8 pad_00[0x214];
    N_08936980 *unk_214;
    u8 pad_218[0x18];
    u32 unk_230;
    A_08936980 *at(u32 idx) {
        if (idx >= unk_230) {
            return NULL;
        }
        It_08936980 n;
        n.unk_00 = unk_214;
        for (s32 i = 0; i < (s32)idx; i++) {
            if (n.unk_00 != NULL) {
                n.unk_00 = n.unk_00->unk_04;
            }
        }
        return (A_08936980 *)n.unk_00->unk_08;
    }
};

typedef struct {
    u8 pad_00[0x118];
    G_08936980 *unk_118;
} X_08936980;

typedef struct {
    u8 pad_00[0x14];
    X_08936980 *unk_14;
} T_08936980;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_08936980(T_08936980 *arg0, void *arg1) {
    s32 *r;
    s32 *k;
    s32 idx;
    G_08936980 *g;
    N_08936980 *n;
    A_08936980 *a;
    B_08936980 *b;
    It_08936980 it;
    s32 i;
    s32 kk;
    It_08936980 last;
    D_08936980_t *d;

    r = func_0885356C(arg1, 0, 1, 4);
    k = func_0885356C(arg1, 1, 1, 4);
    idx = *func_0885356C(arg1, 2, 1, 4);
    g = arg0->unk_14->unk_118;
    a = g->at(idx);
    b = a->unk_08;
    last = b->end();
    it = b->begin(E_08936980(), E_08936980(), E_08936980());
    kk = *k;
    i = 0;
    while (it.ne(last)) {
        if (i == kk) {
            break;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        i++;
    }
    d = (*(C_08936980 **)&it.unk_00->unk_08)->unk_20;
    *r = 0;
    if (d->unk_40 != 0 && d->unk_38 != 0) {
        *r = 1;
    }
    func_08852F00(arg1, 0);
}

}
