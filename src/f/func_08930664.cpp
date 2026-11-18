#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct {
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[0x38];
} E_08930664;

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
} Q_08930664;

typedef struct {
    u8 pad_00[0x40];
} M_08930664;

typedef struct {
    u8 pad_00[0x48];
} K_08930664;

typedef struct {
    f32 unk_00;
    u8 pad_04[0x10];
    f32 unk_14;
    u8 pad_18[0x28];
} N_08930664;

typedef struct {
    u8 pad_00[0x90];
    void *unk_90;
    u8 pad_94[4];
    s32 unk_98;
    s32 unk_9C;
    f32 unk_A0;
    u8 pad_A4[0xC];
} S_08930664;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
} A_08930664;

struct V_08930664 {
    u8 unk_00[0x20];
    Q_08930664 **unk_24;
    u32 unk_28;
    Q_08930664 **end() { return unk_24 + unk_28; }
    void clear() {
        Q_08930664 **p = unk_24;
        if (p != end()) {
            do {
                p++;
            } while (p != end());
        }
        unk_28 = 0;
    }
    V_08930664() {
        unk_24 = (Q_08930664 **)&unk_00[(u32)unk_00 & 3];
        unk_28 = 0;
    }
};

extern E_08930664 D_08AD8E30[];

void func_08855354(N_08930664 *);
void func_088554A0(M_08930664 *, Q_08930664 *, N_08930664 *);
void func_08864E80(void *, void *);
void func_08865FEC(void *, s32, s32);
void func_0886615C(Q_08930664 *);
void func_088664DC(K_08930664 *, void *, u32);

void func_08930664(S_08930664 *arg0, A_08930664 *arg1) {
    V_08930664 v;
    K_08930664 m;
    N_08930664 n;
    M_08930664 r;
    s32 i;
    S_08930664 *s;
    E_08930664 *e;
    u32 j;
    Q_08930664 *q;
    Q_08930664 **p;
    Q_08930664 **d;
    f32 f;

    new (&v.unk_24[v.unk_28]) Q_08930664 *((Q_08930664 *)arg0->unk_90);
    v.unk_28++;
    for (i = 0, s = arg0, e = D_08AD8E30; i < 6; i++, s = (S_08930664 *)((u8 *)s + 0x10)) {
        if (s->unk_98 != 0) {
            func_08865FEC(e, s->unk_98, 0);
            e->unk_54 = s->unk_A0;
            func_088664DC(&m, arg0->unk_90, s->unk_9C);
            func_08864E80(e, &m);
            new (&v.unk_24[v.unk_28]) Q_08930664 *((Q_08930664 *)e);
            v.unk_28++;
            e++;
        }
    }
    for (j = 0; j < v.unk_28; j++, arg1++) {
        q = v.unk_24[arg1->unk_00];
        if (arg1->unk_08 != 1.0f) {
            func_08855354(&n);
            f = arg1->unk_08;
            n.unk_00 = f;
            n.unk_14 = f;
            func_088554A0(&r, q, &n);
            func_08864E80(q, &r);
        }
        q->unk_44 = arg1->unk_04;
        func_0886615C(q);
    }
    j = *(volatile u32 *)&v.unk_28;
    d = v.unk_24;
    p = *(Q_08930664 **volatile *)&v.unk_24;
    if (p != d + j) {
        Q_08930664 **e2 = d + *(volatile u32 *)&v.unk_28;
        do {
            p++;
        } while (p != e2);
    }
    v.unk_28 = 0;
}

}
