#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E;

typedef struct {
    u8 pad_00[0x1AC8];
    volatile u32 unk_1AC8;
    E unk_1ACC[1];
} H;

typedef struct {
    u8 pad_00[0x19CE4];
    struct { s8 unk_00; u8 pad_01[3]; } unk_19CE4[1];
} B;

typedef struct {
    u8 pad_00[0x1498];
    B *unk_1498;
    u8 pad_149C[4];
    H *unk_14A0;
} G;

typedef struct {
    u8 pad_00[4];
    volatile s32 unk_04;
    u8 pad_08[0x20];
    s32 unk_28;
} S;

typedef struct { f32 unk_00, unk_04, unk_08; } V;
typedef struct { f32 unk_00, unk_04; } W;
typedef struct {
    V unk_00;
    V unk_0C;
    W unk_18;
} P;

typedef struct {
    f32 unk_00[4];
    f32 unk_10[4];
    f32 unk_20[4];
    f32 unk_30[4];
    u8 pad_40[0x10];
} M;

typedef struct { f32 unk_00[4]; } R;
typedef struct { u8 pad_00[0xE0]; P unk_E0; } J;

extern G *D_08AD1F14[];
void func_08866B54(M *, s32, void *);
void func_08953BAC(R *, s32, M *);
void func_088651A4(void *, M *, void *, s32, s32);

void func_08953A14(S *arg0, P *arg1, s32 arg2, void *arg3) {
    P p;
    M m;
    R r;
    R t;

    if (arg0->unk_28 != 0) {
        s32 index;
        s32 valid;
        index = arg0->unk_04;
        if (index < 0) {
            valid = 1;
        } else {
            G *g = D_08AD1F14[0];
            s32 n = 0;
            H *h;
            B *b;
            u32 i;
            g = g != NULL ? g : NULL;
            h = g->unk_14A0;
            b = g->unk_1498;
            i = 0;
            if (h->unk_1AC8 != 0) {
                s32 key = arg0->unk_04;
                H *q = h;
                do {
                    if (key == q->unk_1ACC[0].unk_00) {
                        n += q->unk_1ACC[0].unk_04;
                    }
                    i++;
                    q = (H *)((u8 *)q + 8);
                } while (i < h->unk_1AC8);
            }
            valid = n + b->unk_19CE4[index].unk_00 > 0;
        }
        if (valid) {
            P *q = &arg1[arg2];
            p.unk_00 = q->unk_00;
            p.unk_0C = q->unk_0C;
            p.unk_18 = q->unk_18;
            t.unk_00[0] = p.unk_00.unk_00;
            t.unk_00[1] = p.unk_00.unk_04;
            t.unk_00[2] = 0.0f;
            t.unk_00[3] = 0.0f;
            r.unk_00[0] = 0.0f;
            r.unk_00[1] = 0.0f;
            r.unk_00[2] = 0.0f;
            r.unk_00[3] = 1.0f;
            m.unk_00[3] = 0.0f;
            m.unk_10[3] = 0.0f;
            m.unk_20[3] = 0.0f;
            func_08866B54(&m, 3, &t);
            func_08953BAC(&r, 0, &m);
            func_088651A4(&((J *)&arg1[arg2 + 6])->unk_E0, &m, arg3, 0, 1);
        }
    }
}
