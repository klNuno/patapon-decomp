#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} V4;

typedef struct {
    u8 pad_00[8];
    f32 unk_08;
} U;

typedef struct W W;

typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
    u8 unk_14[4];
} P;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 pad_24[0x10];
    s32 unk_34;
} R;

typedef struct {
    u8 pad_00[0x14C0];
    s32 unk_14C0;
    u8 pad_14C4[8];
    u8 unk_14CC;
} S;

typedef struct {
    u8 pad_00[0x90];
    V4 unk_90;
    u8 pad_A0[0x10];
    V4 unk_B0;
    V4 unk_C0;
} Q;

typedef struct {
    u8 pad_00[0x114];
    P *unk_114;
    u8 pad_118[0x25C];
    s32 unk_374;
    u8 pad_378[0x18];
    s32 unk_390;
    u8 pad_394[0xC];
    S *unk_3A0;
    u8 pad_3A4[0x14];
    u8 *unk_3B8;
    u8 pad_3BC[0x934];
    Q unk_CF0;
} T;

s32 func_08899DC0(s32, s32, s32);
void func_08854CD8(V4 *, V4 *, V4 *);
void func_08854F60(f32, V4 *, V4 *);
extern s32 func_0889D88C(s32, s32, s32);
void func_088F5AB4(s32, s32);
void func_08931DDC(s32, s32, s32, V4 *);
s32 func_0893D420(void *, s32);
extern s32 func_08992A3C(s32, s32);
s32 func_08992D48(W *);

s32 func_0889F5DC(u32 arg0, T *arg1) {
    struct { u8 pad_00[0xC]; s32 unk_0C; } a;
    V4 b, c;
    U *u;
    P *p;
    R *r;
    Q *q;
    S *s;
    f32 t;
    s32 n;
    s32 *temp;
    void *k;
    V4 *v;

    p = arg1->unk_114;
    u = (U *)(arg1->unk_3B8 + 0x100);
    if (p != NULL) {
        u = p->unk_10;
    }
    q = &arg1->unk_CF0;
    func_08992D48((W *)p->unk_14);
    r = (R *)func_08992A3C((s32)p->unk_14, 7);
    if (r == NULL) {
        return 0;
    }
    temp = &r->unk_14;
    if (*temp == 0) {
        return 0;
    }
    n = ((s32 *)((u32)temp))[1];
    if (n != 0) {
        func_0889D88C((s32)q, n, 0);
    }
    s = arg1->unk_3A0;
    if (s->unk_14CC == 0 && func_08899DC0(arg1->unk_390, s->unk_14C0, 3) == 0) {
        f32 temp0 = arg1->unk_CF0.unk_90.unk_04;
        f32 temp1 = 0.0f;
        k = (void *)1;
        if (temp0 == temp1) {
            k = NULL;
        }
        if ((f32)(u32)((s32)k ^ 1) < 1.0f) {
            return 1;
        }
    }
    b.unk_04 = 0.0f;
    b.unk_08 = 0.0f;
    b.unk_0C = 0.0f;
    *(u32 *)&b.unk_00 = 0x3F800000;
    t = (f32)arg0;
    t /= 4800.0f;
    func_08854F60(t * u->unk_08, &b, &b);
    func_08854F60(r->unk_1C, &b, &b);
    b.unk_04 = r->unk_20;
    v = &q->unk_B0;
    func_08854CD8(v, v, &b);
    q->unk_B0.unk_0C = 0.0f;
    q->unk_C0.unk_00 = ((volatile V4 *)&b)->unk_00;
    q->unk_C0.unk_04 = ((volatile V4 *)&b)->unk_04;
    q->unk_C0.unk_08 = ((volatile V4 *)&b)->unk_08;
    q->unk_C0.unk_0C = ((volatile V4 *)&b)->unk_0C;
    n = r->unk_34;
    if (n > 0) {
        func_088F5AB4((s32)p, -n);
        a.unk_0C = arg1->unk_374;
        c.unk_00 = ((volatile V4 *)&q->unk_90)->unk_00;
        c.unk_04 = ((volatile V4 *)&q->unk_90)->unk_04;
        c.unk_08 = ((volatile V4 *)&q->unk_90)->unk_08;
        c.unk_0C = ((volatile V4 *)&q->unk_90)->unk_0C;
        func_08931DDC(func_0893D420(&a.unk_0C, 1), 0, r->unk_34, &c);
    }
    return 1;
}
